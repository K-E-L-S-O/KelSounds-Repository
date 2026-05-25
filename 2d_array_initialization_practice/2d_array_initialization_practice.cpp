//2d array practice 5_4_2026
//first time using 2d array

#include <iostream>
#include <iomanip>

int main() {

	const int row = 3;
	const int column = 4;
	double total = 0;//this is to add the total

	double students_and_grades[row][column] = {
		{3.0, 4.0, 1.2, 3.5},
		{2.0, 2.6, 3.2, 2.4},
		{1.3, 1.5, 8.5, 7.4},
	};

	std::cout << std::fixed << std::setprecision(2);
	for (int r = 0; r < row; r++) {//this for loop will sweep through each row
		double accumulator = 0;
		for (int c = 0; c < column; c++) {//this for loop is in each column
			accumulator += students_and_grades[r][c];
			total += students_and_grades[r][c];
		}
		std::cout << "Student " << (r + 1) << " average score: %" 
			      << (accumulator / column) << "\n";
	}

	std::cout << "Class Average score: " << (total / (row * column)) << "\n";

	return 0;
}