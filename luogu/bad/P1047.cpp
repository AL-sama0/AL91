#include <iostream>
using namespace std;
int main(){
	int l, m;
	int ot, ft;
	cin >> l >> m;
	ot = l + 1;
	int u[m+5], v[m+5];
	for(int i = 0; i < m; i++){
		cin >> u[i] >> v[i];
	}
	for(int i = 0; i < m; i++){
		ft = ot - (v[i] - u[i] + 1);
	}
	for(int a = 0; a < m; a++){
		for(int b = 1; a + b < m; b++){
			if(u[a] >= u[a+b] && u[a] <= v[a+b]){
				ft += (v[a+b] - u[a]);
			}
			if(v[a] >= u[a+b] && v[a] <= v[a+b]){
				ft += (v[a] - u[a+b]);
			}
		}
	}
}
