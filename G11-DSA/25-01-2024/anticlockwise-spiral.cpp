#include<iostream>
#include<climits>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a[100][100];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> a[i][j];
		}
	}
	int mx = INT_MIN;
	int col_ans = -1;
	for(int col=0;col<m;col++){
		int sum = 0;
		for(int row=0;row<n;row++){
			sum+=a[row][col];
		}
		if(sum>mx){
			mx = sum;
			col_ans = col;
		}
	}
	cout << mx << " " << col_ans << endl;
	return 0;
}