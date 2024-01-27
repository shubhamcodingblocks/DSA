#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	// n-> number of rows
	// m-> number of columns
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int mx = INT_MIN;
	int col_nu = -1;
	for(int col=0;col<m;col++){
		int sum = 0;
		for(int row=0;row<n;row++){
			sum += a[row][col];
		}
		if(sum > mx){
			mx = sum;
			col_nu = col;
		}
	}
	cout << col_nu << " " << mx << endl;
	return 0;
}