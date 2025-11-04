#include <iostream>
using namespace std;

int Calculate(int n, int m){
	int v = 0;
	int Ans = 0;
	for(int a=0; m!=0; a++){
		v = m % 10;
		m /= 10; 
		for(int b=0; b<a; b++){
			v *= n;
		}
		Ans += v;
	}
	return Ans;
}

int Reverse(int Num){
	int Ans = 0;
	while (Num != 0) {
		Ans = Ans * 10 + Num % 10;
		Num /= 10;
	}
	return Ans;
}

int Check(int Num){
	int check;
	check = Reverse(Num);
	if(Num == check){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	int N, M;
	cin >> N;
	cin >> M;
	int Num1 = 0;
	int Num2 = 0;
	int ans = 0;
	Num1 = Calculate(N, M);
	Num2 = Reverse(Num1);
	int TorF = 0;
	int check = 0;
	while(TorF == 0){	
		Num2 = Reverse(Num1);
		check = Num1 + Num2;
		TorF = Check(check);
		ans++;
		Num1 = check;
		if(ans > 30){
			break;
		} 
	}
	if(ans <= 30){
		cout << "STEP=" << ans;
	}else{
		cout << "Impossible!";
	} 
}
