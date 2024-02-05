#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int bit = (1<<30);
	while(bit>0){
		if((num&bit)==bit){
			cout << 1;
		}
		else{
			cout << 0;
		}
		bit = (bit>>1);
	}
	return 0;
}
