#include <iostream>
using namespace std;

int main() {
	//Part 1,2
	int rows, columns;
	cout << "Enter number of rows (students): ";
	cin >> rows;
	cout << "Enter number of columns (marks): ";
	cin >> columns;
	cout << endl;
	while (rows <= 0 || columns <= 0) {
		cout << "Enter number of rows (students): ";
		cin >> rows;
		cout << "Enter number of columns (marks): ";
		cin >> columns;
		cout << endl;
	}
	const int finalRows = rows, finalColumns = columns;
	int** marks = new int* [finalRows];
	for (int r = 0; r < rows; r++) {
		marks[r] = new int[finalColumns];
	}
	//Part 3,4
	int* StudentTotal = new int[finalRows] {};
	for (int r = 0; r < rows; r++) {
		for (int c = 0; c < columns; c++) {
			cout << "Enter marks of student " << r + 1 << ": ";
			cin >> *(*(marks + r) + c);
			*(StudentTotal + r) += *(*(marks + r) + c);
		}
	}

	//Sorting array in descending order
	int temp = 0;
	for (int i = 0; i < rows - 1; i++) {
		if (*(StudentTotal + i) > *(StudentTotal + i + 1)) {
			temp = *(StudentTotal + i);
			*(StudentTotal + i) = *(StudentTotal + i + 1);
			*(StudentTotal + i + 1) = temp;
		}
	}
	//Displaying the total
	for (int i = 0; i < rows; i++) {
		cout << "Student No " << i + 1 << " has total = " << *(StudentTotal + i) << endl;
	}
	//Displaying highest total
	cout << "Student No 1 has highest total  = " << *(StudentTotal);
	//Part 5
	for (int i = 0; i < rows; i++) {
		delete[] marks[i];
	}
	delete[] marks;
	marks = nullptr;

}