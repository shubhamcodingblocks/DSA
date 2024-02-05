#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	for(int i=30;i>=0;i--){
		if((num&(1<<i)) == (1<<i)){
			cout << 1;
		}
		else{
			cout << 0;
		}
	}
	return 0;
}
