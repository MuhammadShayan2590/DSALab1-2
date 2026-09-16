#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	//Task 2 Part 1
	int StudentNo;
	cout << "Enter the number of students: ";
	cin >> StudentNo;
	//Validating number of students
	while (StudentNo <= 0) {
		cout << endl;
		cout << "Enter the number of students (must be positive): ";
		cin >> StudentNo;
	}
	//Making array and filling with marks
	const int arrSize = StudentNo;
	int* marks = new int[arrSize];
	for (int i = 0; i < arrSize; i++) {
		cout << "Enter the marks of the students: ";
		cin >> *(marks + i);
		while (*(marks + i) <= 0) {
			cout << endl;
			cout << "Enter the number of students (must be positive): ";
			cin >> *(marks + i);
		}
	}
	//Task 2 Part 2
	//Using loop to calculate total and count number of marks above or equal to 50
	double avg = 0, total = 0, count = 0;
	for (int i = 0; i < arrSize; i++) {
		if (*(marks + i) >= 50) {
			total += *(marks + i);
			count++;
		}
	}
	//Calculating average then displaying average and total
	avg = (double)total / (double)count;
	cout << "The total marks counting marks above or equal to 50 = " << total << endl;
	cout << fixed << setprecision(2);
	cout << "The average counting marks above or equal to 50 = " << avg << endl;
	cout << "Pass count: " << count;
	//Task 2 part 3
	delete[] marks;
	marks = nullptr;
}