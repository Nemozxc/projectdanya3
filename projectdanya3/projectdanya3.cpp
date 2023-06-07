#include <iostream>
using namespace std;

int main()
{
	cout << "vvedite razmer vashey matrizi: ";
	int size;
	cin >> size;
	int** matrix = new int* [size];
	for (int i = 0; i < size; i++) {
		matrix[i] = new int[size];
	}
	cout << "vvedite znachenya matrizi: \n";
	for (int i = 0, schet = 1; i < size; i++, schet++) {
		for (int sizee = 0; sizee < size; sizee++, schet++) {
			cout << "[" << schet << "] ";
			cin >> matrix[i][sizee];
		}
		schet--;
	}
	cout << "vasha matriza:\n";
	for (int i = 0; i < size; i++) {
		for (int sizee = 0; sizee < size; sizee++) {
			cout << matrix[i][sizee] << ' ';
	    }
		cout << endl;
	}
	int sum = 0;
	for (int i = 0; i < size; i++) {
		for (int sizee = 0; sizee < size; sizee++) {
			sum += matrix[i][sizee];
		}
	}
	cout << "symma vsex chisel matrizi: " << sum;
	int diagonal = 0;
	for (int i = 0; i < size; i++) {
		for (int sizee = 0; sizee < size; sizee++) {
			if (i == sizee) {
				diagonal += matrix[i][sizee];
			}
	    }
	}
	cout << "\nglavnaya diagonal matrizi: " << diagonal;
}
	
