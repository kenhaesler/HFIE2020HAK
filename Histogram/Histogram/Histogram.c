// Histogram1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>
#include <errno.h>
#include <stdint.h>
#include <assert.h>

int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element 
	int max = arr[0];

	// Traverse array elements  
	// from second and compare 
	// every element with current max  
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	printf("hello world\n");
	FILE* f = NULL;
	_set_errno(0);
	errno_t err = fopen_s(&f, "Alice Adventure in Wonderland.txt", "r");
	if (err != 0)
	{
		printf("the error %i occurred", err);
		return 1;
	}
	assert(f != NULL);
	int ch = getc(f);
	int histogram[256] = {0};

	while (ch > EOF)
	{
		ch = getc(f);
		if (ch != EOF) {
			histogram[ch]++;
		}
		
		// here comes the code for filling the histogram
	}

	for (int i = 0; i < 256; i++) {
		if (histogram[i] != NULL) {
			printf("Vorkommen des Zeichen '%c' = %i\n", i, histogram[i]);
		}
	}

	fclose(f);

	int n = sizeof(histogram) / sizeof(histogram[0]);
	int result = largest(histogram, n);
	printf("The highest count is %i", result);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu