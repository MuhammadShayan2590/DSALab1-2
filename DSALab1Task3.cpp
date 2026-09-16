#include <iostream>
using namespace std;

class Student {
	//Creating public to declare everything under
public:
	//Declaring all needed variables
	int rollNumber, marks;
	//Parameterised constructor to initialise the variables
	Student(int userRollNumber, int userMarks) {
		rollNumber = userRollNumber;
		marks = userMarks;
	}
	//The display function as required
	void display() {
		cout << rollNumber << " " << marks << endl;
	}
};
int main() {
	//Task 3
	//Creating student objects
	Student s1(1, 80);
	Student s2(2, 90);
	cout << "Student 1: ";
	s1.display();
	cout << "Student 2: ";
	s2.display();
	/*Expected outputs:
	Student 1: 1 80
	Student 2: 2 90
	*/
	return 0;
}