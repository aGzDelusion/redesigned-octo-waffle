// ConsoleApplication4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main()
{
	int total = 0; // Accumulator
	int count; // Loop counter
	int numberArray1[24];
	int numberArray2[24];
			   // Calculate and display the total of the first array.
	for (count = 0; count < 24; count++) {
		numberArray1[count];
		total += count;
		cout << "The total for numberArray1 is " << total << endl;
	}
	cout << " ----------------------------- " << endl;
	// Calculate and display the total of the second array.
	for (count = 0; count < 24; count++) {
		numberArray2[count];
		total += count;
		cout << "The total for numberArray2 is " << total << endl;
	}
    return 0;
}

