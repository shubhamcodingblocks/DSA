#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int target;
	cin >> target;
	int i;
	for(i=0;i<n;i++){
		if(a[i]==target){
			cout << "element is present at index " << i << endl;
			break;
		}
	}
	if(i==n){
		cout << "element is not present" << endl;
	}
}