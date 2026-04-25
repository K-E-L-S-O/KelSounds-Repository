#include <iostream>

bool checking_arrays(int[], int[]);//prototype

int main() {

	//we need two arrays
	int array_1[] = { 1, 2, 3, 4, 7, 8 }; //first array
	int array_2[] = { 1, 2, 3, 4, 5, 6 };//second array
	bool arrays_value;

	arrays_value = checking_arrays(array_1, array_2);

	if (arrays_value == false) {
		std::cout << "Your arrays are not identical\n";
		std::cout << "return value: " << arrays_value << "\n";
	}
	else {
		std::cout << "Your arrays are identical\n";
		std::cout << "return value is: " << arrays_value << "\n";
	}
	
	return 0;
}

bool checking_arrays(int array_1[], int array_2[]) {
	for (int i = 0; i < 6; i++) {
		if (array_1[i] != array_2[i]) {
			return false;
		}
	}
	return true;
}