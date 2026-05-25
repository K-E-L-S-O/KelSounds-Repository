//we will read data from the data file here
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

int main() {

	const int m = 3;//3 months for std::string array

	const int r = 3;//this represents June, July, August
	const int c = 30;//this represents the days in each month

	const int wtr = 3;//represents weather type row 3x30
	const int wtc = 30;//represents weather type column

	std::string months[m];//months for array
	char weatherType[wtr][wtc];//this array stores our weather type
	double amountOfRain[r][c];//this array stores our values from each day

	//we will use these variables to test which month
	//held the highest amount of rain
	std::string record_holder_name;//month name with highest amount of rain
	int record_holder_value = 0;//to hold the highest amount of rain value. Make sure to always initialize when comparing!
	


	//we must open the file
	std::ifstream myFile("F:/VisualStudio/Chapter_7_Arrays/Rain_or_Shine/new_text_file/the_text_file/my_weather_file.txt");

	//now I want to check if the file opened
	if (!myFile.is_open()) {
		std::cout << "Error! File could not open!\n";
	}
	else {
		std::cout << "File Opened\n\n";
	}


	std::cout << std::fixed << std::setprecision(2);
	//reading the file and parsing it


	std::cout << "---Weather Report---\n";
	for (int month = 0; month < m; month++) {

		int totalRainyDays = 0;//rainy days accumulator
		int totalCloudyDays = 0;//cloudy days accumulator
		int totalSunnyDays = 0;//sunny days accumulator

		//extract months first
		myFile >> months[month];//this extracts it directly to our array
		std::cout << "Month of " << months[month] << "\n";
		for (int day = 0; day < c; day++) {
			

			//we need to figure out the type of day
			myFile >> weatherType[month][day];//extract directly to our weather array
			if (weatherType[month][day] == 'r') {
				std::cout << "day " << (day + 1) << ": of " << months[month] << " was rainy\n";//was it rainy
				totalRainyDays += 1;
			}
			if (weatherType[month][day] == 'c') {
				std::cout << "day " << (day + 1) << ": of " << months[month] << " was cloudy\n";//was it cloudy
				totalCloudyDays += 1;
			}
			if (weatherType[month][day] == 's') {
				std::cout << "day " << (day + 1) << ": of " << months[month] << " was sunny\n";//was it sunny
				totalSunnyDays += 1;
			}

			//extract the inches in rain
			myFile >> amountOfRain[month][day];//extracts the amount of rain directly into our array
			std::cout << "Amount of rain for day " << (day + 1) << " of " << months[month] << ": " << amountOfRain[month][day] << "inches\n";
			std::cout << "--------------------------\n";
		}

		std::cout << "Amount of rainy days for " << months[month] << ": " << totalRainyDays << "\n";
		std::cout << "Amount of cloudy days for " << months[month] << ": " << totalCloudyDays << "\n";
		std::cout << "Amount of sunny days for " << months[month] << ": " << totalSunnyDays << "\n";

		//we need to test to see which month held the highest amount
		//of rainy days

		if (totalRainyDays > record_holder_value) {
			record_holder_name = months[month];
			record_holder_value = totalRainyDays;
		}

		std::cout << "\n";//start a new line for the next month
	}
	
	std::cout << "Month with highest amount of rain: " << record_holder_name << "\n";
	std::cout << "Month of " << record_holder_name << " had " << record_holder_value
		      << " amount of rainy days\n";

	return 0;
}