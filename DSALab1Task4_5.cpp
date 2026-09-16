#include <iostream>
using namespace std;

int main() {
//Task 4
//Declaring array
int numbers[8];
//Creating loop to read numbers into array
for (int i = 0; i < 8; i++) {
	//Reading numbers into array
	cout << "Enter a number: ";
	cin >> numbers[i];
	cout << endl;
}
//Declaring array of repeated numbers
int repeatnumbers[8];
//Using loops to find and store all repeated numbers in array
for (int i = 0; i < 8; i++) {
	for (int c = i + 1; c < 8; c++) {
		if (numbers[i] == numbers[c]) {
			repeatnumbers[i] = numbers[i];
		}
	}
}
//Initialising max as small value and min as large value to use, and variables for index
int max = 0, min = 99999, maxIndex, minIndex;
for (int i = 0; i < 8; i++) {
	//Replacing minimum with new minimum if found and replacing minimum value's index
	if (numbers[i] < min) {
		min = numbers[i];
		minIndex = i;
	}
	//Replacing maximum with new maximum if found and replacing maximum value's index
	if (numbers[i] > max) {
		max = numbers[i];
		maxIndex = i;
	}
}
//Printing the minimum and maximum value
cout << "Smallest number: " << min << endl;
cout << "Largest number: " << max << endl;
//Initialising the repeat index with out of range index intentionally
int minrepeatIndex = 10, maxrepeatIndex = 10, index = 0;
//Using do while loop to check if the lowest value has been repeated
do {
//If lowest value is repeated, it's new index is stored in repeatindex
	if (repeatnumbers[index] == min) {
		minrepeatIndex = index;
	}
	index++;
} while ((repeatnumbers[index] != min) && (index < 8));
index = 0;
//Same as minimum while loop
//Used do while loop to check if the largest value is repeated
do {
	//If repeated, it's new index is stored in repeatindex
	if (repeatnumbers[index] == max) {
		maxrepeatIndex = index;
	}
	index++;
} while ((repeatnumbers[index] != max) && (index < 8));
//If repeatindex is changed, print the new index(which is the lowest one)
if (maxrepeatIndex != 10) {
	cout << "Lowest number's index =" << minrepeatIndex << endl;
}
//If unchanged, print the earlier found index, meaning no repeat
else { cout << "Lowest number's index =" << minIndex << endl; }
//If repeatindex is changed, print the new index (which is the lowest one)
if (maxrepeatIndex != 10) {
	cout << "Highest number's index =" << maxrepeatIndex << endl;
}
//If unchanged, print earlier found index, meaning no repeat
else { cout << "Highest number's index =" << maxIndex << endl; }
	return 0;
}