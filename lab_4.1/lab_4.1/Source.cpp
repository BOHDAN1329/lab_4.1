// lab_4.1.cpp
// < Паньків Богдан >
// Лабораторна робота № 4.1
// Цикли
// Варіант 17
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int i, N;
	double sum = 0;

	cout << "Enter N: "; cin >> N;

	i = 1;
	while (i <= N) {
		sum += sin(i) / (1 + cos(i));
		i++;
	}
	cout << "Result 1: " << sum << endl;
	sum = 0;
	i = 1;
	do {
		sum += sin(i) / (1 + cos(i));
		i++;
	} while (i <= N);

	cout << "Result 2: " << sum << endl;
	sum = 0;
	for (i = 1; i <= N; i++) {
		sum += sin(i) / (1 + cos(i));
	}

	cout << "Result 3: " << sum << endl;
	sum = 0;
	for (i = N; i >= 1; i--) {
		sum += sin(i) / (1 + cos(i));
	}

	cout << "Result 4: " << sum << endl;

	return 0;
}