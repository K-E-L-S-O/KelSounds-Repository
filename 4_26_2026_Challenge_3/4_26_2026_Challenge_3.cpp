#include <iostream>

int main() {
	const int size = 7;//we'll need this for the 'for' loop
	int tempatures[size] = { -2, 5, -10, 12, 0, -8, 3 };
	int lowest = tempatures[0];//set to first number in the index subscript '0'

	for (int count = 1; count < size; count++) {//start at index 1
		if (tempatures[count] < lowest) {       //no need to test the first value because
			lowest = tempatures[count];         //'-2' is already set to the lowest value.
		}
	}

	std::cout << "The lowest value in the array: " << lowest << "\n";

	return 0;
}