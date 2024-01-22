#include<iostream>
#include<cstring>
using namespace std;

int main(){
	char a[100];
	cin >> a;
	int freq[26] = {};
	for(int i=0;i<strlen(a);i++){
		int idx = a[i]-'a';
		freq[idx] ++;
	}
	for(int i=0;i<26;i++){
		cout << char(i+'a') << " " << freq[i] << endl;
	}
	return 0;
}