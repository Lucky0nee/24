#include <iostream>
#include <array>

using namespace std;

int main() {
	//system("chcp 1251>nul");
	const int SizeA = 6, SizeB = 5;
	const int SizeC = SizeA + SizeB;

	int A[SizeA] = { 1, 2, 3,  4,  5, 6 };
	int B[SizeB] = { 6, 8, 4, 10,  11 };
	int C[SizeC] = { };

	int* ptrA = A;
	int* ptrB = B;
	int index = 0;
	for (int i = 0; i < SizeA; i++) {
		for (int j = 0; j < SizeB; j++) { //(SizeA > SizeB ? SizeB : SizeA)
			if (*(ptrA+ i) == *(ptrB + j)) {
				C[index] += ptrA[i];
				index++;
			}
		}
	}
  cout << "Однаковi числа: \n";
	for (int i = 0; i < index; i++)
		cout << C[i] << "\n";
}

/*
Дано два масиви: А[n] і B[m]. Треба створити третій масив, який буде містити:
■ елементи, спільні для двох масивів, 
тобто є і в першому і в другому.

Програму написати з використанням вказівників.
*/
