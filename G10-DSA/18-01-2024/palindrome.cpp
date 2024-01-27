#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char str[100];
	cin >> str;
	int n = strlen(str);
	int l = 0, r = n-1;
	while(l<r){
		if(str[l] != str[r]){
			cout << "not a palindrome" << endl;
			break;
		}
		l++;
		r--;
	}
	if(l>=r){
		cout << "is a palindrome" << endl;
	}
	return 0;
}