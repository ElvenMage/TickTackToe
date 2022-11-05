#include <iostream>
using namespace std;
char square[3][3];
void boarddrawing();
void player1();
void player2();
void resetBoard() {
	for (int i = 0;i < 3;i++) {
		for (int j = 0;j < 3;j++) {
			square[i][j] = ' ';
		}
	}
}
int main() {
	resetBoard();
	boarddrawing();
	player1();


}
void player1() {
	while (square[0][0] != 'X' && square[1][1] != 'X' && square[2][2] != 'X' ||
		square[0][0] != 'X' && square[1][0] != 'X' && square[2][0] != 'X' ||
		square[0][2] != 'X' && square[1][2] != 'X' && square[2][2] != 'X' ||
		square[0][2] != 'X' && square[1][1] != 'X' && square[2][0] != 'X' ||
		square[0][0] != 'X' && square[0][1] != 'X' && square[0][2] != 'X' ||
		square[0][1] != 'X' && square[1][1] != 'X' && square[2][1] != 'X' ||
		square[2][0] != 'X' && square[2][1] != 'X' && square[2][2] != 'X' ||
		square[1][0] != 'X' && square[1][1] != 'X' && square[1][2] != 'X' ||

		square[0][0] != 'O' && square[1][1] != 'O' && square[2][2] != 'O' ||
		square[0][0] != 'O' && square[1][0] != 'O' && square[2][0] != 'O' ||
		square[0][2] != 'O' && square[1][2] != 'O' && square[2][2] != 'O' ||
		square[0][2] != 'O' && square[1][1] != 'O' && square[2][0] != 'O' ||
		square[0][0] != 'O' && square[0][1] != 'O' && square[0][2] != 'O' ||
		square[0][1] != 'O' && square[1][1] != 'O' && square[2][1] != 'O' ||
		square[2][0] != 'O' && square[2][1] != 'O' && square[2][2] != 'O' ||
		square[1][0] != 'O' && square[1][1] != 'O' && square[1][2] != 'O')
	{
		int a;
		if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X' ||
			square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X' ||
			square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X' ||
			square[0][2] == 'X' && square[1][1] == 'X' && square[2][0] == 'X' ||
			square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X' ||
			square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X' ||
			square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X' ||
			square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X') {
			cout << "Player 1 Wins! " << endl;
			break;
		}
		if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O' ||
			square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O' ||
			square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O' ||
			square[0][2] == 'O' && square[1][1] == 'O' && square[2][0] == 'O' ||
			square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O' ||
			square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O' ||
			square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O' ||
			square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O') {
			cout << "Player 2 Wins! " << endl;
			break;
		}
		else {
			cout << "Player 1 Enter a Number : ";
			cin >> a;
			if (square[0][0] != 'X' || square[0][1] != 'X' || square[0][2] != 'X' ||
				square[1][0] != 'X' || square[1][1] != 'X' || square[1][2] != 'X' ||
				square[2][0] != 'X' || square[2][1] != 'X' || square[2][2] != 'X') {
				if (a == 1) {
					square[0][0] = 'X';
					boarddrawing();
				}
				else if (a == 2) {
					square[0][1] = 'X';

					boarddrawing();
				}
				else if (a == 3) {
					square[0][2] = 'X';

					boarddrawing();
				}
				else if (a == 4) {
					square[1][0] = 'X';

					boarddrawing();
				}
				else if (a == 5) {
					square[1][1] = 'X';

					boarddrawing();
				}
				else if (a == 6) {
					square[1][2] = 'X';

					boarddrawing();
				}
				else if (a == 7) {
					square[2][0] = 'X';

					boarddrawing();
				}
				else if (a == 8) {
					square[2][1] = 'X';

					boarddrawing();
				}
				else if (a == 9) {
					square[2][2] = 'X';

					boarddrawing();
				}
				player2();
			}

		}
	}

}
void player2() {
	int a;
	while (square[0][0] != 'X' && square[1][1] != 'X' && square[2][2] != 'X' ||
		square[0][0] != 'X' && square[1][0] != 'X' && square[2][0] != 'X' ||
		square[0][2] != 'X' && square[1][2] != 'X' && square[2][2] != 'X' ||
		square[0][2] != 'X' && square[1][1] != 'X' && square[2][0] != 'X' ||
		square[0][0] != 'X' && square[0][1] != 'X' && square[0][2] != 'X' ||
		square[0][1] != 'X' && square[1][1] != 'X' && square[2][1] != 'X' ||
		square[2][0] != 'X' && square[2][1] != 'X' && square[2][2] != 'X' ||
		square[1][0] != 'X' && square[1][1] != 'X' && square[1][2] != 'X' ||

		square[0][0] != 'O' && square[1][1] != 'O' && square[2][2] != 'O' ||
		square[0][0] != 'O' && square[1][0] != 'O' && square[2][0] != 'O' ||
		square[0][2] != 'O' && square[1][2] != 'O' && square[2][2] != 'O' ||
		square[0][2] != 'O' && square[1][1] != 'O' && square[2][0] != 'O' ||
		square[0][0] != 'O' && square[0][1] != 'O' && square[0][2] != 'O' ||
		square[0][1] != 'O' && square[1][1] != 'O' && square[2][1] != 'O' ||
		square[2][0] != 'O' && square[2][1] != 'O' && square[2][2] != 'O' ||
		square[1][0] != 'O' && square[1][1] != 'O' && square[1][2] != 'O') {

		if (square[0][0] == 'X' && square[1][1] == 'X' && square[2][2] == 'X' ||
			square[0][0] == 'X' && square[1][0] == 'X' && square[2][0] == 'X' ||
			square[0][2] == 'X' && square[1][2] == 'X' && square[2][2] == 'X' ||
			square[0][2] == 'X' && square[1][1] == 'X' && square[2][0] == 'X' ||
			square[0][0] == 'X' && square[0][1] == 'X' && square[0][2] == 'X' ||
			square[0][1] == 'X' && square[1][1] == 'X' && square[2][1] == 'X' ||
			square[2][0] == 'X' && square[2][1] == 'X' && square[2][2] == 'X' ||
			square[1][0] == 'X' && square[1][1] == 'X' && square[1][2] == 'X') {
			cout << "Player 1 Wins! " << endl;
			break;
		}
		if (square[0][0] == 'O' && square[1][1] == 'O' && square[2][2] == 'O' ||
			square[0][0] == 'O' && square[1][0] == 'O' && square[2][0] == 'O' ||
			square[0][2] == 'O' && square[1][2] == 'O' && square[2][2] == 'O' ||
			square[0][2] == 'O' && square[1][1] == 'O' && square[2][0] == 'O' ||
			square[0][0] == 'O' && square[0][1] == 'O' && square[0][2] == 'O' ||
			square[0][1] == 'O' && square[1][1] == 'O' && square[2][1] == 'O' ||
			square[2][0] == 'O' && square[2][1] == 'O' && square[2][2] == 'O' ||
			square[1][0] == 'O' && square[1][1] == 'O' && square[1][2] == 'O') {
			cout << "Player 2 Wins! " << endl;
			break;
		}
		else {
			cout << "Player 2 Enter a Number : ";
			cin >> a;
			if (square[0][0] != 'X' || square[0][1] != 'X' || square[0][2] != 'X' ||
				square[1][0] != 'X' || square[1][1] != 'X' || square[1][2] != 'X' ||
				square[2][0] != 'X' || square[2][1] != 'X' || square[2][2] != 'X') {
				if (a == 1) {
					square[0][0] = 'O';

					boarddrawing();

				}
				else if (a == 2) {
					square[0][1] = 'O';

					boarddrawing();

				}
				else if (a == 3) {
					square[0][2] = 'O';

					boarddrawing();

				}
				else if (a == 4) {
					square[1][0] = 'O';

					boarddrawing();

				}
				else if (a == 5) {
					square[1][1] = 'O';

					boarddrawing();

				}
				else if (a == 6) {
					square[1][2] = 'O';

					boarddrawing();

				}
				else if (a == 7) {
					square[2][0] = 'O';

					boarddrawing();

				}
				else if (a == 8) {
					square[2][1] = 'O';

					boarddrawing();

				}
				else if (a == 9) {
					square[2][2] = 'O';

					boarddrawing();

				}
				player1();
			}

		}
	}
}
void boarddrawing() {

	printf(" %c | %c | %c ", square[0][0], square[0][1], square[0][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c ", square[1][0], square[1][1], square[1][2]);
	printf("\n---|---|---\n");
	printf(" %c | %c | %c ", square[2][0], square[2][1], square[2][2]);
	printf("\n---|---|---\n");
	printf("\n");
}