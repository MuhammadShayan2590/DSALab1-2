#include <iostream>
using namespace std;

int main() {
	//Task 3 Part 1
	int sales[2][3] = { {2,4,6}, {1,3,5} };
	int (*rowptr)[3] = sales;
	int total = 0, dayBranchTotal = 0, branchTotal = 0, dayTotal = 0;
	//Using double loop to add total and display elements
	//Task 3 Part 1 and 2 combined to reduce number of loops
	for (int r = 0; r < 2;r++) {
		for (int c = 0; c < 3;c++) {
			if (*(*(rowptr + r) + c) > 0) {
				//Doing each total and displaying for part 2
				total += *(*(rowptr + r) + c);
				branchTotal += *(*(rowptr + r) + c);
				dayBranchTotal = *(*(rowptr + r) + c);
				//The reading and displaying for part 1
				cout << "The sales of branch " << r+1 << " on day " << c+1 << " = " << dayBranchTotal << endl;
			}
		}
		cout << "The total for branch " << r+1 << " = " << branchTotal << endl;
		branchTotal = 0;
	}
	//Doing the day total for part 2
	for (int c = 0; c < 3; c++) {
		for (int r = 0; r < 2; r++) {
			if (*(*(rowptr + r) + c) > 0) {
				dayTotal += *(*(rowptr + r) + c);
			}
		}
		cout << "The total for day " << c + 1 << " = " << dayTotal << endl;
		dayTotal = 0;
	}
	cout << "The total number of sales = " << total << endl;
}