#include <iostream>
#include <algorithm>
const int MAX = 100;
int number[MAX];
int monoy[6] = {1,5,10,50,100,500 };
int sum, allmonoy;
void solve();
int main(){
	using std::cin;
	using std::cout;
	for (int i = 0; i < 6; i++) {
		cin >> number[i];
	}
	cin >> allmonoy;
	solve();
}
void solve() {
	int t = 0;
	for (int i=5; 0<=i; i--) {
		t = std::min(allmonoy / monoy[i], number[i]);
		allmonoy = allmonoy-monoy[i] * t;
		sum = sum + t;
	}
	printf("%d", sum);
}