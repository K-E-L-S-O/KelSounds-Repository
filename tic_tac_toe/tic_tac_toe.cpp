#include <iostream>
#include <cctype>


const int column = 3;
bool didPlayerWin(char[][column], int);//prototype to see if player won


int main() {

	const int row = 3;
	

	char gameBoard[row][column] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};

	std::cout << "---TIC TAC TOE---\n\n";
	//printing the board
	for (int r = 0; r < row; r++) {
		for (int c = 0; c < column; c++) {
			
			std::cout << gameBoard[r][c];
			if (c < column - 1) {
				std::cout << "  |  ";
			}
		}
		std::cout << "\n";
		
		if (r < row - 1) {
			std::cout << "---------------\n";
		}
		
	}

	//players choose their character either 'X' or 'O'
	char playerOneChar;
	char playerTwoChar = ' ';//initialized it so compiler gives me zero warnings

	std::cout << "\nPlayer 1 choose 'X' or 'O'\n";
	std::cin >> playerOneChar;
	playerOneChar = std::toupper(playerOneChar);//just in case user types lowercase

	if (playerOneChar == 'X') {
		playerTwoChar = 'O';
		std::cout << "Player 2 has been assigned 'O'\n\n";
	}
	if (playerOneChar == 'O') {
		playerTwoChar = 'X';
		std::cout << "Player 2 has been assigned 'X'\n\n";
	}

	//users place their characters
	char boardPlacement[3][3]{
			{' ', ' ', ' '},
			{' ', ' ', ' '},
			{' ', ' ', ' '}
	};
	int maximumTurns = 0;//total amount of turns

	while (maximumTurns < row * column) {//the game begins!

		int ro;
		int col;

		std::cout << "Player one choose a row and column to place an '" << playerOneChar << "'" << "\n";
		std::cout << "ROW: \n";
		std::cin >> ro;
		std::cout << "COLUMN: \n";
		std::cin >> col;
		
		while (boardPlacement[ro - 1][col - 1] != ' ') {
			std::cout << "Spot is already taken\n";
			std::cout << "choose another ROW: \n";
			std::cin >> ro;
			std::cout << "COLUMN: \n";
			std::cin >> col;
		}
		boardPlacement[ro - 1][col - 1] = playerOneChar;
		maximumTurns++;//increment for each player turn

		std::cout << "\n";
		for (int r = 0; r < 3; r++) {//board print player 1 turn
			
			for (int c = 0; c < 3; c++) {

				std::cout << boardPlacement[r][c];
				if (c < 2) {
					std::cout << "  |  ";
				}
			}
			std::cout << "\n";

			if (r < 2) {
				std::cout << "---------------\n";
			}

		}

		//check to see if player 1 won.
		if (didPlayerWin(boardPlacement, column)) {
			std::cout << "player one has won!\n";
			std::cout << "Game Over\n";
			exit(0);
		}

		int p2ro;
		int p2col;

		if (maximumTurns < 9) {//checks to see if the board is full. If so player 2 turn is skipped
			std::cout << "player 2 choose a row and column to place an '" << playerTwoChar << "'" << "\n";
			std::cout << "ROW: \n";
			std::cin >> p2ro;
			std::cout << "COLUMN: \n";
			std::cin >> p2col;

			while (boardPlacement[p2ro - 1][p2col - 1] != ' ') {
				std::cout << "Spot is already taken\n";
				std::cout << "choose another ROW: \n";
				std::cin >> p2ro;
				std::cout << "COLUMN: \n";
				std::cin >> p2col;
			}
			boardPlacement[p2ro - 1][p2col - 1] = playerTwoChar;
			maximumTurns++;//increment for each player turn

			std::cout << "\n";
			for (int r = 0; r < 3; r++) {//board print player 2 turn

				for (int c = 0; c < 3; c++) {

					std::cout << boardPlacement[r][c];
					if (c < 2) {
						std::cout << "  |  ";
					}
				}
				std::cout << "\n";

				if (r < 2) {
					std::cout << "---------------\n";
				}

			}

		}
		if (didPlayerWin(boardPlacement, column)) {
			std::cout << "player two has won!\n";
			std::cout << "Game Over\n";
			exit(0);
		}
		
	}

	//draw
	std::cout << "Game is a draw!\n";
	
	return 0;
}

bool didPlayerWin(char board[][column], int row) {
	if (board[0][0] != ' ' && board[0][0] == board[0][1] && board[0][1] == board[0][2]) {//top row of board
		return true;
	}
	if (board[1][0] != ' ' && board[1][0] == board[1][1] && board[1][1] == board[1][2]) {//middle row of board
		return true;
	}
	if (board[2][0] != ' ' && board[2][0] == board[2][1] && board[2][1] == board[2][2]) {//bottom row of board
		return true;
	}
	if (board[0][0] != ' ' && board[0][0] == board[1][0] && board[1][0] == board[2][0]) {//first vertical row top to bottom
		return true;
	}
	if (board[0][1] != ' ' && board[0][1] == board[1][1] && board[1][1] == board[2][1]) {//second vertical row top to bottom
		return true;
	}
	if (board[0][2] != ' ' && board[0][2] == board[1][2] && board[1][2] == board[2][2]) {//third vertical row top to bottom
		return true;
	}
	if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) {//diagonal top left to bottom right
		return true;
	}
	if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) {//diagonal top right to bottom left
		return true;
	}
	
	return false;

}