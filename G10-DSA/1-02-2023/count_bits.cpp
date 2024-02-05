#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	int ct = 0;
	while(num>0){
		int rem = (num%2);
		if(rem==1){
			ct++;
		}
		num = num/2;
	}
	cout << ct << endl;
	return 0;
}
