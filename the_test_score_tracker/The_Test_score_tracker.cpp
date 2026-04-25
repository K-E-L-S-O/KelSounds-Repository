//test score tracker practice
#include <iostream>
#include <iomanip>

void get_scores(double[], int);
double calculateTotal(double[], int);
void showScores(double[], int);

int main() {

	const int size = 5;//variable holds the amount of test scores
	double test_scores[size];//array only accepts integer values.
	double total;

	//call the function
	get_scores(test_scores, size);

	//calculate array
	total = calculateTotal(test_scores, size);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The Average: " << (total / size) << "%" << "\n";
	std::cout << "Test Scores:\n";
	std::cout << "---------------------\n";
	//display the test scores
	showScores(test_scores, size);

	return 0;
}

void get_scores(double scores[], int size) {//this function just retrieves the scores
	for (int i = 0; i < size; i++) {
		std::cout << "Enter Score " << (i + 1) << "\n";
		std::cin >> scores[i];
	}
}

double calculateTotal(double theArrayInfo[], int size) {//this function adds the test scores and returns the total
	double total = 0;
	for (int i = 0; i < size; i++) {
		total += theArrayInfo[i];
	}

	return total;
}

void showScores(double theScores[], int arraySize) {
	//displaying the scores
	for (int i = 0; i < arraySize; i++) {
		std::cout << "test score " << (i + 1) << ": " << theScores[i] << "%" << "\n";
	}
}

