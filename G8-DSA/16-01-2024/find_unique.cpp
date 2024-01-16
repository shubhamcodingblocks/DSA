#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int ans = -1;
	if(a[0]!=a[1]){
		ans = 0;
	}
	if(a[n-1]!=a[n-2]){
		ans = n-1;
	}
	int s = 0, e = n-1;
	if(ans==-1){ // do this only if we didnt find the answer at 0th index or n-1th index
		while(s<=e){
		int mid = (s+e)/2;
		if(a[mid]!=a[mid-1] and a[mid]!=a[mid+1]){
			ans = mid;
			break;
		}
		else if(a[mid]==a[mid-1]){
			// division of 2 parts: 
			// left part: s....mid
			// right part: mid+1 ..... e
			int left_size = (mid-s)+1;
			if(left_size%2==0){
				// if the size of left part is divisible
				// by 2 then the single occurence element 
				// cannot occur in this part of the array
				// hence we have to discard the left part
				// of the array
				s = mid+1;
			}
			else{
				// left part : s , s+1 ,s+2 , ..... , mid
				// but a[mid] and a[mid-1] are also equal 
				// so we can ignore this too
				// hence the element would be present from 
				// index s, s+1 , ... ,mid-2
				e = mid-2;
			}
		}
		else if(a[mid]==a[mid+1]){
			// since a[mid] and a[mid+1] are equal we 
			// can divide the array into two parts:
			// left part: s , s+1 , . . . , mid-1
			// right part: mid, mid+1, . . . ,e
			int right_size = (e-mid+1);
			if(right_size%2==0){
				// if the size of right part of the
				// array is divisible by 2 the single
				// occurence element cannot be present 
				// in this part of the array
				// hence we can discard this part
				e = mid-1;
			}
			else if(right_size%2==1){
				// right part : mid,mid+1, . . ., e
				// but a[mid] and a[mid+1] are also equal 
				// so we can ignore this too
				// hence the element would be present from 
				// index mid+2, mid+3 , . . . , e
				s = mid+2;
			}
		}
	}
	}
	cout << a[ans] << endl; 
	// ans stores the index of the element which occurs only once
	// hence we can print the value of the element which occurs 
	// at this index
	return 0;
}