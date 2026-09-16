#include <iostream>
using namespace std;

int main() {
	//Task 2
	//Declaration
	int numbers[5];
	int total = 0;
	//Loop for reading numbers into array
	for (int i = 0; i < 5; i++) {
		//Process of reading the numbers
		cout << "Enter a number: ";
		cin >> numbers[i];
		cout << endl;
	}
	//Loop for adding numbers to total
	for (int i = 0; i < 5; i++) {
		total += numbers[i];
	}
	//Printing the total
	cout << "Total = " << total;
	return 0;
}