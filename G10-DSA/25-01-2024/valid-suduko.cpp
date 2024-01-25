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
	}

	for(int row=0;row<9;row++){
		for(int col=0;col<9;col++){
			int ele = a[row][col];
			// check if it repeats in row

			// check if it repeats in col

			// check if it repeats in sub-matrix 
		}
	}
	return 0;
}