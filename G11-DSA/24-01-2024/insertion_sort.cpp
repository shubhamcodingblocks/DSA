#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int pos=1;pos<n;pos++){
		int curr = a[pos];
		int j = pos-1;
		while(j>=0 and a[j]>curr){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = curr;
	}
	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}