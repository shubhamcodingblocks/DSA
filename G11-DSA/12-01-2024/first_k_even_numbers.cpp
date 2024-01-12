#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int s = 0, e = n-1;
	int ans = -1;
	while(s<=e){
		// step 1
		int mid = (s+e)/2;

		// step 2
		if(a[mid]%2==0){
			ans = mid;
			s = mid+1;
		}
		else{
			e = mid-1;
		}
	}
	cout << ans+1 << endl;
	return 0;
}