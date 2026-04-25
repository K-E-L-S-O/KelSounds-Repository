//Challenge 2: The "Inventory Swapper"
#include <iostream>
#include <string>

void showInventory(std::string[], int);
void replaceItem(std::string[], int);

int main() {

	const int size = 4;
	std::string fruits[size] = { "Apples", "Bananas", "Cherries", "Dates" };

	//show the inventory
	showInventory(fruits, size);

	std::cout << "Enter a new list:\n";
	std::cout << "--------------------\n";

	replaceItem(fruits, size);

	return 0;
}

void showInventory(std::string fruits[], int size) {
	std::cout << "List:\n";
	std::cout << "-------------\n";
	for (int i = 0; i < size; i++) {
		std::cout << fruits[i] << "\n";
	}
}

void replaceItem(std::string fruits[], int size) {
	std::cout << "new list\n";
	std::cout << "------------\n";
	for (int i = 0; i < size; i++) {
		std::cout << "Enter item: " << (i + 1) << "\n";
		std::cin >> fruits[i];
	}

	std::cout << "\nNew Items Entered: \n";
	std::cout << "----------------------\n";
	for (int i = 0; i < size; i++) {
		std::cout << fruits[i] << "\n";
	}
}