#include<iostream>
using namespace std;

int main(){
	int num;
	int k;
	cin >> num >> k;
	cout << (num^(1<<k)) << endl;
	return 0;
}
