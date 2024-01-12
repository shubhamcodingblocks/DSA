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
	while(s<=e){
		// step 1: find mid
		int mid = (s+e)/2;
		// step 2: check conditions
		if(a[mid]==target){ // if target element is present at mid position
			cout << mid << endl;
			break;
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
	if(s>e){ // if the value of s overshoots e that means target element is not present inside this array
		cout << "target element not present" << endl;
	}
	return 0;
}