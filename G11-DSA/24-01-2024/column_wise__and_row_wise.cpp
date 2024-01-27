#include<iostream>
using namespace std;

int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	// rowwise print
	for(int row=0;row<3;row++){
		for(int col=0;col<3;col++){
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	cout << "---------------" << endl;
	// column wise print 
	for(int col=0;col<3;col++){
		for(int row = 0;row<3;row++){
			cout << a[row][col] << " ";
		}
		cout << endl;
	}
	return 0;
}