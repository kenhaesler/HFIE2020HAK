#include <stdio.h>
#include <string.h>
#include <stdint.h>
//#include <math.h>

//#define PI 3.14159265359

int main() {

	const double pi = 3.14159265359;

	// Eingabe
	double winkel;
	printf("Bitte geben Sie einen Winkel an: ");
	scanf_s("%f", &winkel);

	printf("\nEingegebener winkel: %f\n", winkel);

	//Umrechnung zum Bogenmass
	double winkelrad = (double)winkel * pi / 180.0;

	double zaehler = winkelrad;
	double sin = winkelrad;

	int nenner = 1;
	int count = 1;
	int anzahl = 1;
	int vorzeichen = 1;


	printf("Resultat aus winkelrad: %f\n", winkelrad);

	while (count < anzahl) {
		vorzeichen = vorzeichen * -1;
		zaehler = zaehler * winkelrad * winkelrad;
		nenner = nenner * (count + 1) * (count + 2);
		count = count + 2;
		sin = sin + vorzeichen * zaehler / (double)nenner;

	}

	printf("Das Resultat ist: %f", sin);

}