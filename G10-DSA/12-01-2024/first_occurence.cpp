#include<iostream>
using namespace std;

int main(){
	int a[1000];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	int target;
	cin >> target;
	int s = 0, e = n-1; // initial search space
	int ans = -1;
	while(s<=e){
		// step 1: find mid
		int mid = (s+e)/2;
		// step 2: check conditions
		if(a[mid]==target){ // if target element is present at mid position
			ans = mid; // maybe this is the first occurence
			e = mid-1; // if this is not the first occurence
						// search the element on left
		}
		else if(a[mid]>target){
			// if a[mid] > target -> all the elements from index 
			// mid....e will also be greater than target 
			// because: the array is sorted
			e = mid-1; // new search space: s...mid-1
		}
		else if(a[mid]<target){
			// if a[mid] < target -> all the elements from index
			// s...mid will also be less than target
			// because: the array is sorted
			s = mid+1; // new search space: mid+1...e
		}
	}
	if(ans==-1){
		cout << "target element is not present" << endl;
	}
	else{
		cout << "target element's first occurence is present at index: " << ans << endl;
	}
	return 0;
}