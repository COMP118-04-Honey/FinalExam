/**
* @file FinalExam.cpp
* @author Fedonas Melis
* @date 2023-10-01
* @version 1.0
* @brief Program to manage a 3x5 matrix with specific functionalities.
* @details This program allows the user to enter data into a 3x5 matrix,
*/
#include <iostream>
using namespace std;

//Function prototypes
void EnterData(double[3][5]);
double SumNeg(double[3][5]);
int CountElem(double[3][5]);

int main()
{
	double matrix[3][5];
	int choice = 3;
	//Menu
	while (choice != 0) {
		cout << "\n1) Enter data in matrix (range -1.5 to 0.5)"
			<< "\n2) Sum negative numbers in matrix"
			<< "\n3) Display elements with 1.5 value"
			<< "\n0) Exit"
			<< "\nPlease enter choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			EnterData(matrix);
			cout << "\nData entered!";
			break;
		case 2:
			cout << "\nSum of all negative numbers is: " << SumNeg(matrix);
			break;
		case 3:
			cout << "\nNumber of elements with value 1.5 is: " << CountElem(matrix);
			break;
		default:
			break;
		}
	}
	return 0;
}


void EnterData(double n[3][5]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			cout << "\nEnter number: ";
			cin >> n[i][j];
			if (n[i][j] < -1.5 || n[i][j] > 0.5) {
				cout << "\nInvalid input. Please enter a number in range of -1.5 to 0.5: ";
				j--;
			}
		}
	}
}

double SumNeg(double n[3][5]) {
	double sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (n[i][j] < 0) {
				sum += n[i][j];
			}
		}
	}
	return sum;
}
int CountElem(double n[3][5]) {
	int count = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 5; j++) {
			if (n[i][j] == 1.5) {
				count++;
			}
		}
	}
	return count;
}