#include<iostream>
using namespace std;

int main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int target; // element to insert
	cin >> target;
	for(int i=n-1;i>=0;i--){
		a[i+1]=a[i];
	}
	a[0] = target;
	for(int i=0;i<n+1;i++){
		cout << a[i] << " ";
	}
	return 0;
}