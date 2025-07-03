// Assignment 2

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <time.h>
#include <string>
#include <vector>

using namespace std;

int main() {

	int index;
	int numbers[4][5];
	double total(0);
	double sum(0);
	double average(0);
	double hold(0);

	cout << "Please enter the scores of each reviewer, one reviewer at a time: " << endl;

	for (int i = 0; i < 4; i++) {
		for (int j = 0;j < 5;j++) {
			cin >> index;
			numbers[i][j] = index;
		}
	}

	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 5;j++) {
			sum = sum + numbers[i][j];
		}
		total += sum;
		if ((sum / 5) < 5) {
			hold += sum;
		}
		sum = 0;
	}

	average = total / 20;

	cout << endl;
	for (int i = 0; i < 4;i++) {
		for (int j = 0; j < 4;j++) {
			cout << numbers[i][j] << "\t";
		}
		cout << endl;
	}

	if (hold >= 1) {
		cout << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "Rejected." << endl;
		cout << endl;
	}
	if (hold == 0 && average >= 7) {
		cout << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "Accepted." << endl;
		cout << endl;
	}
	if (hold == 0 && average >= 6 && average < 7) {
		cout << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "." << endl;
		cout << "Borderline." << endl;
		cout << endl;
	}

	system("pause");
	return 0;
}

