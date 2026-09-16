#include <iostream>
using namespace std;

int main() {
	int sales[5];
	int* p = sales;
	int total = 0,Num;
	//Task 1 part 1, entering values into array using dereference
	//and calculating total
	for (int i = 0; i < 5; i++) {
		cout << "Enter a positive number: ";
		cin >> *(p+i);
		while (*(p+i) < 0) {
			cout << "Enter a positive number: ";
			cin >> *(p+i);
		}
		total += *(p + i);
	}
	//To check total at the part 1
	cout << endl;
	cout << total << endl;
	//Task 1 part 2, adding a number to third day's sales and to total sales
	cout << "Enter a number to add to third day sales: ";
	cin >> Num;
	*(p + 2) += Num;
	total += Num;
	//to check the third index value after part 2:
	cout << *(p + 2) << endl;
	//To check total at the end
	cout << total;
	return 0;
}