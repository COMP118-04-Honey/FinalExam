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

//Matrix dimensions
const int a = 3, b = 5; 

//Function prototypes
void EnterData(double[a][b]);
double SumNeg(double[a][b]);
int CountElem(double[a][b]);

/*
* @brief Main function to run the program.
*/
int main()
{

    double matrix[a][b];
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

//Functions
/*
* @brief Function to enter data into the 3x5 matrix.
* @param n 3x5 matrix to store the data.
* @details The function prompts the user to enter numbers within the range of -1.5 to 0.5.
*/
void EnterData(double n[a][b]) {
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "\nEnter number: ";
			cin >> n[i][j];
			if (n[i][j] < -1.5 || n[i][j] > 0.5) {
				cout << "\nInvalid input. Please enter a number in range of -1.5 to 0.5: ";
				j--;
			}
		}
	}
}
/*
* @brief Function to calculate the sum of all negative numbers in the 3x5 matrix.
* @param n 3x5 matrix to sum negative numbers.
* @return The sum of all negative numbers in the matrix.
* @details The function iterates through the matrix and adds up all negative numbers.
*/
double SumNeg(double n[a][b]) {
	double sum = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (n[i][j] < 0) {
				sum += n[i][j];
			}
		}
	}
	return sum;
}
/*
* @brief Function to count the number of elements with value 1.5 in the 3x5 matrix.
* @param n 3x5 matrix to count elements.
* @return The count of elements with value 1.5 in the matrix.
* @details The function iterates through the matrix and counts how many times the value 1.5 appears.
*/
int CountElem(double n[a][b]) {
	int count = 0;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (n[i][j] == 1.5) {
				count++;
			}
		}
	}
	return count;
}