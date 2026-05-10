#include <iostream>

const int y_axis = 2;//the y axis
const int z_axis = 2;//the z axis

void theData(int[][y_axis][z_axis], int);
void displayData(int[][y_axis][z_axis], int);//display data prototype
int calculate_total(int[][y_axis][z_axis], int);//calculate total prototype

int main() {

	const int x_axis = 2;//the x axis

	int userData[x_axis][y_axis][z_axis] = {};//this array initializes to zero

	//asking user to store info data into the array
	std::cout << "---Enter Data Information---\n";
	theData(userData, x_axis);

	//display the data from the array
	displayData(userData, x_axis);

	//display the total
	std::cout << "\n\nTotal: " << calculate_total(userData, x_axis) << "\n";



	return 0;
}

void theData(int dimensions[][y_axis][z_axis], int x_column) {//adding a for loop for each dimension

	for (int x = 0; x < x_column; x++) {
		std::cout << "---ROW " << (x + 1) << " ---\n";

		for (int y = 0; y < y_axis; y++) {
			std::cout << "COLUMN " << (y + 1) << "\n";

			for (int z = 0; z < z_axis; z++) {
				std::cout << "Enter Data: \n";
				std::cin >> dimensions[x][y][z];
			}
		}
	}
}

void displayData(int display[][y_axis][z_axis], int x_axisDisplay) {//this function will display the data we input
	for (int x = 0; x < x_axisDisplay; x++) {//for x_axis
		std::cout << "\n\n---ROW " << (x + 1) << " ---\n";
		
		for (int y = 0; y < y_axis; y++) {
			std::cout << "\nCOLUMN " << (y + 1) << "\n";

			for (int z = 0; z < z_axis; z++) {
				std::cout << display[x][y][z] << " ";
			}
		}
	}
}

int calculate_total(int calculate_array[][y_axis][z_axis], int x_axis) {//this function will calculate
	                                                                    //the total.
	int total = 0;//our accumulator
	for (int x = 0; x < x_axis; x++) {
		for (int y = 0; y < y_axis; y++) {
			for (int z = 0; z < z_axis; z++) {
				total += calculate_array[x][y][z];
			}
		}
	}

	return total;
}