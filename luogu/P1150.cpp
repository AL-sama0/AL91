#include <iostream>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int y = n;
	int ans = n;
	while(y >= k){
		y -= k;
		y++;
		ans++;
	}
	cout << ans;
}