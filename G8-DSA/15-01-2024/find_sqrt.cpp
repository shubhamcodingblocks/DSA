// find the square root of a number (perfect square)

#include<iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int s = 0 , e = n; // squar root of a number cannot
						// be less than 0 and also cannot
						// be greater than n
	while(s<=e){
		int mid = (s+e)/2;

		if(mid*mid == n){
			cout << mid << endl;
			break;
		}
		else if(mid*mid < n){
			s = mid+1;
		}
		else if(mid*mid > n){
			e = mid-1;
		}
	}
	return 0;
}