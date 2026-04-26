//practicing assignment logic
//

#include <iostream>

int main() {

	const int size = 5;
	int originalValues[size] = { 1, 2, 3, 4, 5 };
	int backupValues[size] = {};

	//copy each element into the 'backupValues'
	for (int i = 0; i < size; i++) {
		backupValues[i] = originalValues[i];
	}

	originalValues[0] = 105;//chnaging index 0 of array "originalValues"
	
	//print origianl values
	std::cout << "---Original Values---\n";
	for (int i = 0; i < size; i++) {
		std::cout << originalValues[i] << "\n";
	}

	std::cout << "\n\n---Backup Values---\n";
	for (int i = 0; i < size; i++) {
		std::cout << backupValues[i] << "\n";
	}

	return 0;
}