//practice Challenge
//just practicing how to accumulate in an array with
//ranged based for loop.
#include <iostream>
#include <iomanip>
int main() {

	const int SIZE = 5;
	double rainfall[SIZE] = { 1.2, 0.5, 2.8, 0.0, 1.1 };
	double total = 0.0;//accumulator

	//range based for loop to add the array
	for (double iteration : rainfall) {
		total += iteration;
	}

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Total Rainfall: " << total << "\n";
	std::cout << "Average: " << (total / SIZE) << "\n";

	return 0;
}