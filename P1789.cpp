#include <iostream>
using namespace std;
int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int flag[n][n];
	int x[m+1], y[m+1], o[k+1], p[k+1];
	for(int i = 0; i < m; i++){
		cin >> x[i] >> y[i];
		flag[x[i]][y[i]] = 1;
		flag[x[i]+1][y[i]] = 1;
		flag[x[i]+2][y[i]] = 1;
		flag[x[i]-1][y[i]] = 1;
		flag[x[i]-2][y[i]] = 1;
		flag[x[i]][y[i]+1] = 1;
		flag[x[i]][y[i]+2] = 1;
		flag[x[i]][y[i]-1] = 1;
		flag[x[i]][y[i]-2] = 1;
		flag[x[i]+1][y[i]+1] = 1;
		flag[x[i]+1][y[i]-1] = 1;
		flag[x[i]-1][y[i]+1] = 1;
		flag[x[i]-1][y[i]-1] = 1;
	}
	for(int i = 0; i < k; i++){
		cin >> o[i] >> p[i];
		flag[o[i]][p[i]] = 1;
		flag[o[i]+1][p[i]] = 1;
		flag[o[i]+2][p[i]] = 1;
		flag[o[i]-1][p[i]] = 1;
		flag[o[i]-2][p[i]] = 1;
		flag[o[i]][p[i]+1] = 1;
		flag[o[i]][p[i]+2] = 1;
		flag[o[i]][p[i]-1] = 1;
		flag[o[i]][p[i]-2] = 1;
		flag[x[i]+1][y[i]+1] = 1;
		flag[x[i]+1][y[i]-1] = 1;
		flag[x[i]-1][y[i]+1] = 1;
		flag[x[i]-1][y[i]-1] = 1;
		flag[o[i]+2][p[i]+2] = 1;
		flag[o[i]+2][p[i]-2] = 1;
		flag[o[i]-2][p[i]+2] = 1;
		flag[o[i]-2][p[i]-2] = 1;
		flag[o[i]+2][p[i]+1] = 1;
		flag[o[i]+2][p[i]-1] = 1;
		flag[o[i]-2][p[i]+1] = 1;
		flag[o[i]-2][p[i]-1] = 1;
		flag[o[i]+1][p[i]+2] = 1;
		flag[o[i]+1][p[i]-2] = 1;
		flag[o[i]-1][p[i]+2] = 1;
		flag[o[i]-1][p[i]-2] = 1;
	}
	int ans;
	for(int X = 0; X < n; X++){
		for(int Y = 0; Y < n; Y++){
			if(flag[X][Y] != 1){
				ans++;
			}
		}
	}
	ans -= 1;
	cout << ans;
}