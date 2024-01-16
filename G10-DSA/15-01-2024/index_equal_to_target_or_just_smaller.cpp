// find the index of the target element in a sorted array
// if the target element is present in the array
// otherwise print the index of the element which is just
// smaller than this target element

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
	int ans = -1;
	while(s<=e){
		int mid = (s+e)/2;

		if(a[mid]==target){
			ans = mid;
			break;
		}
		else if(a[mid]>target){
			e = mid-1;

		}
		else if(a[mid]<target){
			ans = mid;
			s = mid+1;
		}
	}
	cout << "index: " << ans << " elem: " << a[ans] << endl;
	return 0;
}