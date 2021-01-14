#include <iostream>
#include <fstream>
#include <string>

using namespace std;
template <typename T>
void ReadMatrixFromFile(T** matrix, T size) {
	ifstream fin;
	fin.open("Matrix.txt");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			fin >> matrix[i][j];
		}
	}
	fin.close();
}

template <typename T>
void ShowMatrix(T** matrix, T size) {
	cout << "�������:" << endl;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[i][j] << "   ";
		}
		cout << endl;
	}
}

int main() {
	setlocale(LC_ALL, "ukr");
	bool restart = 0;
	do {
		/////////////////////��������� �������/////////////////////
		int size;
		do {
			cout << "����i��, ���� �����, ����i� ��������� ������i. �� �i���� 18! " << endl;
			cout << "size = ";
			cin >> size;
		} while (size <= 0 || size > 18);
		int** matrix = new int* [size];
		for (int i = 0; i < size; i++) {
			matrix[i] = new int[size];
		}
		ReadMatrixFromFile(matrix, size);
		ShowMatrix(matrix, size);
		/////////////////��������� ������///////////////////
		int* arr = new int[size];
		for (int i = 0; i < size; i++) {
			int number(0);
			for (int j = 0; j < size - 1; j++) {
				if (matrix[j][i] < matrix[j + 1][i]) {
					number = 1;
				}
				else {
					arr[i] = 0;
				}
			}
			if (arr[i] != 0) {
				arr [i] = number;
			}
		}
		cout << "�����:" << endl;
		for (int i = 0; i < size; i++) {
			cout << "arr[" << i << "]= " << arr[i] << "   ";
		}
		cout << endl;
		///////////////////���������/////////////////////////
		for (int i = 0; i < size; i++) {
			delete[] matrix[i];
		}
		delete[] matrix;
		delete[] arr;
		cout << "���� ������ ��������� �������� �������� ����i�� 1. ���� �i - 0" << endl;
		cin >> restart;
	} while (restart);
	return 0;
}