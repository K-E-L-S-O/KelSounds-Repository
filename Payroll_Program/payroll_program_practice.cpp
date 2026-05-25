#include <iostream>
#include <iomanip>

int main() {

	const int employees = 7;//number of employees

	long int empID[employees] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };//employees identification numbers
	int employeeHours[employees];//will hold how many hours each employee worked
	double payRate[employees];//this will hold employees pay rate
	double wages[employees];//this will hold total wages for each employee
	                        

	//we must get the employee hours and fill it into our array
	//std::cout << "---Employee Hours---\n";
	for (int i = 0; i < employees; i++) {
		std::cout << "Enter hours for employee " << (i + 1) << "\n";
		std::cin >> employeeHours[i];//insert directly into our array
		while (employeeHours[i] < 0) {
			std::cout << "Hours must be greater than 0. Enter again\n";
			std::cin >> employeeHours[i];
		}

		std::cout << "Enter pay rate for employee " << (i + 1) << "\n";
		std::cin >> payRate[i];//insert directly into our array
		while (payRate[i] < 15.00) {
			std::cout << "Minimum wage by law must be over $15.00. Enter again.\n";
			std::cin >> payRate[i];
		}
	}
	std::cout << "--------------------\n";

	//now we must calculate the gross wages for each employee
	for (int e = 0; e < employees; e++) {
		//calculate 
		wages[e] = employeeHours[e] * payRate[e];//insert wage directly into our array
	}

	std::cout << std::fixed << std::setprecision(2);
	//now we must display each identification number, and gross wages
	for (int e = 0; e < employees; e++) {
		std::cout << "--------------------\n";
		//first display ID Number
		std::cout << "Employee " << (e + 1) << " Identification Number: " << empID[e];
		
		//now we can display their gross wage
		std::cout << "\nEmployee Gross wage: $" << wages[e] << "\n";
		std::cout << "--------------------\n";
	}
	
	return 0;
}