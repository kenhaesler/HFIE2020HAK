// Development.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <math.h>

int main()
{
	struct calculation {
		float x;
		float y;
		float summe;
		float subtraktion;
		float produkt;
		float division;
		int modulo;
	};

	struct calculation calc1;

	float x, y;
	printf("---DEVELOPMENT AREA---\n");
	printf("Bitte eine erste Zahl eingeben: ");
	scanf_s("%f",&calc1.x);
	printf("Bitte eine zweite Zahl eingeben: ");
	scanf_s("%f",&calc1.y);

	calc1.summe = calc1.x + calc1.y;
	calc1.subtraktion = calc1.x - calc1.y;
	calc1.produkt = calc1.x * calc1.y;
	calc1.division = calc1.x / calc1.y;
	calc1.modulo = (int)calc1.x % (int)calc1.y;

	printf("\nDie Summe: %0.2f\n", calc1.summe);
	printf("Die Subtraktion: %0.2f\n", calc1.subtraktion);
	printf("Das Produkt: %0.2f\n", calc1.produkt);
	printf("Die Division: %0.2f\n", calc1.division);
	printf("Der Modulo: %i\n", calc1.modulo);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
