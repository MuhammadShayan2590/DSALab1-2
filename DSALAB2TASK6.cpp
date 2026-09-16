#include <iostream>
using namespace std;

int main() {
	int n = 3;
	int* values = new int[n];
	for (int i = 0; i < n; i++)
		cin >> values[i];
	cout << values[0];
	delete[] values;
}