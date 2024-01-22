#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int target;
	cin >> target;
	int s = 0, e = n-1;
	while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]==target){
			cout << mid << endl;
			break;
		}
		if(a[mid]<=a[e]){
			if(target<=a[e] and target>=a[mid]){
				s = mid+1;
			}
			else{
				e = mid-1;
			}
		}
		else if(a[mid]>=a[s]){
			if(target>=a[s] and target<=a[mid]){
				e = mid-1;
			}
			else{
				s = mid+1;
			}
		}
	}
	if(s>e){
		cout << "target not found" << endl;
	}
	return 0;
}