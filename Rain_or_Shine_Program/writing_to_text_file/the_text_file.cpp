//we are going to write to the text file first
#include <iostream>
#include <fstream>
#include <string>
int main() {

	const int rows = 3;//represents the months
	const int columns = 30;//represents the days

	std::ofstream myFile("my_weather_file.txt");//created the text file

	//first fill the array
	for (int r = 0; r < rows; r++) {
		std::string month;//user will enter the month
		

		std::cout << "Enter month " << (r + 1) << ": \n";
		std::cin >> month;

		//storing month in the file first
		myFile << month << " ";//inserting the month into the text file
		
		for (int c = 0; c < columns; c++) {

			char rcs;//user will enter 'r' 'c' or 's' to say if it was rainy, cloudy, or sunny
			double rainfall;//user will enter rainfall

			//ask user if it was rainy, cloudy, or sunny
			std::cout << "was day " << (c + 1) << ": of " << month
				      << " rainy, cloudy, or sunny?\n";
			std::cout << "Type 'r' if the day was rainy\n";
			std::cout << "Type 'c' if the day was cloudy\n";
			std::cout << "Type 's' if the day was sunny\n";
			std::cin >> rcs;

			//handling capitol letters(just in case)
			rcs = std::tolower(rcs);

			myFile << rcs << " ";//inserted 'r' 'c' or 's' into the file
		
			//we need to store amount of rainfall
			std::cout << "Enter the amount of rainfall on day " << (c + 1) << ": of " << month << "\n";
			std::cin >> rainfall;

			myFile << rainfall << " ";//inserting amount of rainfall on day
		}
		myFile << "\n";
	}

	//make sure to close the file its good practice
	myFile.close();


	return 0;
 }