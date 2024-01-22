#include<iostream>
using namespace std;

int main(){
	char s[5] = {'a','b','c','d','\0'};
	char s1[] = {'a','b','c','d','\0'};
	char str[5] = "abcd";
	char str1[] = "abcd";
	cout << s << " --> " << s1 << " --> " << str << " --> " << str1 << endl;
	return 0;
}