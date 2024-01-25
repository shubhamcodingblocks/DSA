#include<iostream>
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
	int sr = 0, er = n-1, sc = 0, ec = m-1;
	while(sr<=er and sc<=ec){
		// step1: print first row
		for(int col=sc;col<=ec;col++){
			cout << a[sr][col] << ", ";
		}
		sr++;

		// step2: print last column
		for(int row=sr;row<=er;row++){
			cout << a[row][ec] << ", ";
		}
		ec--;

		// step3: print last row in reverse order
		if(sr<=er){ 
			// conditions to check that after 
			// performing step 1 and step 2 sr should be
			// less than or equal to er
			for(int col=ec;col>=sc;col--){
				cout << a[er][col] << ", ";
			}
			er--;
		}

		// step4: print starting column
		if(sc<=ec){
			// conditions to check that after
			// performing step 1 and step2 sc should be less 
			// than or equal to ending column
			for(int row=er;row>=sr;row--){
				cout << a[row][sc] << ", ";
			}
			sc++;
		}
	}

	return 0;
}