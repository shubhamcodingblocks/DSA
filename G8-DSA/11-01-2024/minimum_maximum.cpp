#include<iostream>
#include<climits>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int mn = INT_MAX;
	for(int i=0;i<n;i++){
		if(a[i]<mn){
			mn = a[i];
		}
	}
	cout << mn << endl;
	return 0;
}