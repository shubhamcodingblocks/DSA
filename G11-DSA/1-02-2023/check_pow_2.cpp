#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int ct = 0;
	while(num>0){
		int rem = num%2;
		if(rem==1){
			ct++;
		}
		num = num/2;
	}
	if(ct==1){
		cout << "num is power of 2" << endl;
	}
	else{
		cout << "num is not a power of 2" << endl;
	}
	return 0;
}
