#include<iostream>
using namespace std;

int main(){
	int a[9][9] = {
		{9,3,0,0,7,0,0,0,0}
		,{6,0,0,1,9,5,0,0,0}
		,{0,7,8,0,0,0,0,6,0}
		,{5,0,0,0,6,2,0,0,3}
		,{4,0,0,8,0,3,0,0,1}
		,{7,0,0,0,2,0,0,0,6}
		,{0,6,0,0,0,0,2,8,0}
		,{0,0,0,4,1,9,0,0,5}
		,{0,0,0,0,8,0,0,7,9}
	};

	int n = 9, m = 9;

	for(int row=0;row<n;row++){
		for(int col=0;col<m;col++){
			int ele = a[row][col];
			// check if ele exists more than once
			// in its row

			// check if ele exists more than once 
			// in its colmn


			// check if ele exists more than once
			// in its respective sub-matrix
		}
	}
	return 0;
}