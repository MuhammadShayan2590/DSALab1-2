#include <iostream>
using namespace std;

int main() {
	//Task 5  setup
	int num;
	cout << "Enter a number from 1-10: ";
	cin >> num;
	cout << endl;
	while (num < 1 || num > 10) {
		cout << "Enter a number from 1-10: ";
		cin >> num;
		cout << endl;
	}
	int* marks = new int[num];
	for (int i = 0; i < num; i++) {
		cout << "Enter marks number " << i + 1 << ": ";
		cin >> *(marks + i);
	}
	//Printing initial array
	for (int i = 0; i < num; i++) {
		cout << *(marks + i) << " ";
	}
	cout << endl;
	//Task 5 Part 1
	int* secBlock = new int[num + 1];
	//Copying values to new array
	for (int i = 0; i < num; i++) {
		*(secBlock + i) = *(marks + i);
	}
	//Putting new value
	cout << "Enter a new number: ";
	cin >> *(secBlock + num);
	//Printing array after adding value and copying to other array
	for (int i = 0; i <= num; i++) {
		cout << *(secBlock + i) << " ";
	}
	//Task 5 Part 2
	delete[] marks;
	marks = secBlock;
	num++;
	//Task 5 Part 3
	delete[] marks;

}