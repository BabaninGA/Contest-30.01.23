using namespace std;
#include <iostream>

void scanMatrix(int* line, int n) {
	for (int i = 0; i < n; i++) {
		line[i] = 1 + rand() % 99;
	}
}

void printMatrix(int* line, int n) {
	for (int i = 0; i < n; i++) {
		cout << line[i] << " ";
	}
}

int mainDiagonal(int** matrix, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += matrix[i][i];
	}
	return sum;
}

int main() {
	srand(time(NULL));
	int n = 0;
	cin >> n;
	int** matrix = new int* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new int[n];
		scanMatrix(matrix[i], n);
	}
	for (int i = 0; i < n; i++) {
		printMatrix(matrix[i], n);
		cout << "\n";
	}
	cout << mainDiagonal(matrix, n);

	for (int i = 0; i < n; i++)
		delete[] matrix[i];
	delete[] matrix;

	return 0;
}