#include<iostream>
#include<climits>
using namespace std;

int main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int mn = INT_MAX;
	int mx = INT_MIN;
	for(int i=0;i<n;i++){
		if(a[i]>mx){
			mx = a[i];
		}
		if(a[i]<mn){
			mn = a[i];
		}
	}
	cout << "min: " << mn << " " << "max: " << mx << endl;
	return 0;
}