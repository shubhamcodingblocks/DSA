#include<iostream>
#include<cstring>
using namespace std;

// append b to a 

int main(){
	char a[100];
	char b[100];
	cin >> a;
	cin >> b;
	int i = strlen(a);
	int j = 0;
	while(j<=strlen(b)){
		a[i] = b[j];
		i++;
		j++;
	}
	cout << a << endl;
	return 0;
}