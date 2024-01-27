#include<iostream>
using namespace std;

int main(){
	int a[4][4] = {1,2,3,5,7,9,11,15,17,19,21,25,31,35,36,39};
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	int target = 45;
	int row = 0, col = 3;
	while(row<=3 and col>=0){
		if(a[row][col]==target){
			cout << "target element found";
			break;
		}
		else if(a[row][col]<target){
			row++;
		}
		else if(a[row][col]>target){
			col--;
		}
	}
	if(row>3 || col<0){
		cout << "target element not found" << endl;
	}
	return 0;
}