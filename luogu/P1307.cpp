#include <iostream>
using namespace std;
int Reverse(int Num){
	int Ans = 0;
	while (Num != 0) {
		Ans = Ans * 10 + Num % 10;
		Num /= 10;
	}
	return Ans;
}
int main(){
	int N;
	cin >> N;
	int Ans;
	Ans = Reverse(N);
	cout << Ans;
}