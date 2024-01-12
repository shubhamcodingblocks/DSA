#include<iostream>
using namespace std;

int main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int k;
	cin >> k;
	int ele;
	cin >> ele;
	for(int i=n-1;i>=k;i--){
		a[i+1] = a[i];
	}
	n++;
	a[k] = ele;
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}