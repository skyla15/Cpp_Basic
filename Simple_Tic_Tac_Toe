#include <iostream>
using namespace std;

void draw(char board[][3]) {
	for (int i = 0; i < 3; i++) {
		cout << "---|---|---" << endl;
		cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
	}
	cout << "---|---|---" << endl;
}

int checkWin(char board[][3]) {

	for (int i = 0; i < 3; i++) {

		if (((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && board[0][i] != ' ') || ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && board[i][0] != ' '))
			return 1;

		else if (((board[0][0] == board[1][1]) && (board[1][1] == board[2][2])) || ((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])))
			if (board[1][1] == ' ')
				return 0;
			else
				return 1;
	}
	
	return 0;
}

int main() {
	char board[3][3];
	int cnt = 0;
	int x, y;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = ' ';
		}
	}


	while(cnt < 9){

		
		cout << "좌표 입력 : ";
		cin >> x >> y;
		if (board[x][y] != ' ') {
			cout << "잘못 두셨습니다" << endl;
			cout << "좌표 입력 : ";
			cin >> x >> y;
		}
		board[x][y] = (cnt % 2 == 0) ? 'X' : 'O';

		if (x || y)
			system("cls");

		draw(board);

		if( x || y){
			if (checkWin(board)) {
				cout << " GAME OVER " << endl;
				break;
			}
		}

		cnt++;		
		
		
	}

	system("pause");

}
