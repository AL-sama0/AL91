#include <iostream>
using namespace std;
int board[3][3] = {0};
int win(int w){
	for(int i=0; i<=2; i++){
		if(board[0][i]==w && board[1][i]==w && board[2][i]==w){
			return 1;
			break;
		}else if(board[i][0]==w && board[i][1]==w && board[i][2]==w){
			return 2;
			break;
		}else if(board[0][0]==w && board[1][1]==w && board[2][2]==w){
			return 3;
			break;
		}else if(board[0][2]==w && board[1][1]==w && board[2][0]==w){
			return 3;
			break;
		}
	}
	return 0;
}
int main(){
	int input = 0;
	int xiaoa = 1;
	int uim = 2;
	cin >> input;
	int n[10] = {0};
	int p[10] = {0};
	int l = 0;
	for(int i=0; input!=0; i++){
		n[i] = input % 10;
		input /= 10;
		l++;
	}
	l -= 1;
	int num = 0;
	for(int i=l; i>=0; i--){
		p[num] = n[i];
		num++;
	}
//	for(int i=0; i<=l-1; i++){
//		cout << p[i] << " ";
//	}
	int x = 0, y = 0;
	for(int i=0; i<=l; i++){
		x = (p[i] % 3) - 1;
		if(x==-1){
			x = 2;
		}
		if(p[i]<=3){
			y = 0;
		}else if(p[i]>=7){
			y = 2;
		}else {
			y = 1;
		}
		if(i%2==0){
			board[x][y] = xiaoa;
		}else {
			board[x][y] = uim;
		}
	}
//	for(int Y=0; Y<=2; Y++){
//		for(int X=0; X<=2; X++){
//			cout << board[X][Y] << " ";
//		}
//		cout << "\n";
//	}
	int xiaoaW = win(xiaoa);
	int uimW = win(uim);
	if(xiaoaW != 0){
		cout << "xiaoa wins.";
	}else if(uimW != 0){
		cout << "uim wins.";
	}else {
		cout << "drew.";
	}
}