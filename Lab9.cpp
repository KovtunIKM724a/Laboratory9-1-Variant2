#include <iostream>
using namespace std;

int main()
{
	srand(time(nullptr));

	const int RANK = 10;
	double array[RANK][RANK];
	double average_main = 0;
	double average_sub = 0;
	int a, b;

	
	for (int i = 0; i < RANK; i++) {
		for (int j = 0; j < RANK; j++) {
			double first_N = rand() % 201 - 100;
			double second_N = (double)(rand() % 2000 - 1000) / 1000;
			array[i][j] = first_N + second_N;
		}
	}

	for (int i = 0; i < RANK; i++) {
		average_main += array[i][i];
	}
	average_main /= RANK;

	for (int i = 0; i < RANK; i++) {
		average_sub += array[i][RANK - 1 - i];
	}
	average_sub /= RANK;

	cout << "Matrix:" << endl;

	double max = array[0][0];
	for (int i = 0; i < RANK; i++) {
		for (int j = 0; j < RANK; j++) {
			cout << array[i][j] << " ";

			if (array[i][j] > max) {
				max = array[i][j];
				a = i;
				b = j;
			}

		}
		cout << endl;
	}
	cout << endl;
	cout << "The average arithmetic value along the main diagonal of the matrix: " << average_main << endl;
	cout << "The average arithmetic value along the side diagonal of the matrix : " << average_sub << endl;
	cout << "The maximum value in the matrix is " << max << ". It is location: " << a + 1 << " line, " << b + 1 << " column.";


}