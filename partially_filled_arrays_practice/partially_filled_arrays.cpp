//'capacity' and 'count' work together
//to keep track of what the user enters into the
//array and then to display the total number of
//grades.
#include <iostream>

int main() {

	const int size = 20;
	double capacity[size];
	int count = 0;//counting the user input
	double userInput;

	std::cout << "Enter a grade (0-100).\n";
	std::cout << "Enter '-1' to quit.\n";
	std::cin >> userInput;

	//prompting user to enter a grade and then
	//storing those inputs into the array.
	while (userInput != -1 && count < size) {
		capacity[count] = userInput;
		count++;
		std::cout << "Enter a grade (0-100).\n";
		std::cout << "Enter '-1' to quit.\n";
		std::cin >> userInput;
	}

	//printing out the grades stored
	//in the array.
	for (int i = 0; i < count; i++) {
		std::cout << "Student " << (i + 1) << " grade: " << capacity[i] << "\n";
	}

	return 0;
}