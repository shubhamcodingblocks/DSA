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
	int ans = n; // first occurence of 1
	while(s<=e){
		// step 1: find mid 
		int mid = (s+e)/2;

		// step 2: conditions (either the value is 1 or 0)
		if(a[mid]==0){
			s = mid+1;
		}
		else if(a[mid]==1){
			ans = mid; // maybe this is the first occ of 1
			e = mid-1;
		}
	}
	cout << ans << endl; 
	return 0;
}