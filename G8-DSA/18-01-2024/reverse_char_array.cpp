#include<iostream>
#include<cstring>
using namespace std;

// reverse a character array

int main(){
	char a[100];
	cin >> a;
	int l = 0, r = strlen(a)-1;
	while(l<r){
		swap(a[l],a[r]);
		l++;
		r--;
	}
	cout <<a << endl;
	return 0;
}