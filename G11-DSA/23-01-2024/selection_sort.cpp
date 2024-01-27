#include<iostream>
using namespace std;

int main(){
	int a[100000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n-1;i++){
		int min_idx = i;
		for(int j=i+1;j<n;j++){
			if(a[j]<a[min_idx]){
				min_idx = j;
			}
		}
		swap(a[min_idx],a[i]);
	}

	for(int i=0;i<n;i++){
		cout << a[i] << " ";
	}
	return 0;
}