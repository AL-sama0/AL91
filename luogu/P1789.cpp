#include <iostream>
using namespace std;
int main(){
	int n, m, k;
	cin >> n >> m >> k;
	int flag[n][n] = {0};
	int x[m+1], y[m+1], o[k+1], p[k+1];
	for(int i = 0; i < m; i++){
		cin >> x[i] >> y[i];
		x[i] -= 1;
		y[i] -= 1;
		for(int dx = -2; dx <= 2; dx++) {
    		for(int dy = -2; dy <= 2; dy++) {
        		if(abs(dx) + abs(dy) <= 2) {
            		int nx = x[i] + dx;
            		int ny = y[i] + dy;
            		if(nx >= 0 && nx < n && ny >= 0 && ny < n) {
               			flag[nx][ny] = 1;
            		}
        		}
    		}
		}
	}
	for(int i = 0; i < k; i++){
		cin >> o[i] >> p[i];
		o[i] -= 1;
		p[i] -= 1;
		for(int dx=-2; dx<=2; dx++){
			for(int dy=-2; dy<=2; dy++){
				int nx = o[i] + dx;
				int ny = p[i] + dy;
				if(nx>=0 && nx<n && ny>=0 && ny<n){
					flag[nx][ny] = 1;
				}
			}
		}
	}
	int ans = 0;
	for(int X = 0; X < n; X++){
		for(int Y = 0; Y < n; Y++){
			if(flag[X][Y] != 1){
				ans++;
			}
		}
	}
	cout << ans;
}
