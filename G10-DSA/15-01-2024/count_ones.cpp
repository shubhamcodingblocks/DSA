#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int s = 0, e = n-1; // initial search space
	int ans = -1;
	// store first occurence of 1
	while(s<=e){
		// step1: find mid
		int mid = (s+e)/2;

		// step2: comparisions
		if(a[mid]==0){
			s = mid+1;
		}
		else if(a[mid]==1){
			ans = mid;
			e = mid-1;
		}
	}
	cout << "first occurence of one : " << ans << endl;
	cout << "count of ones: " << (n-ans) << endl;
	return 0;
}