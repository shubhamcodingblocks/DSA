#include<iostream>

using namespace std;

int main(){
	int num;
	cin >> num;
	int ans = 0;
	int place = 1;
	while(num>0){
		int rem = (num%2);
		ans = ans + place*rem;
		place = place*10;
		num = num/2;
	}
	cout << ans << endl;
	return 0;
}
