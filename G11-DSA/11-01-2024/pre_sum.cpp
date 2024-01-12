#include<iostream>
using namespace std;

int main(){
	int a[100];
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}

	int pre[100];
	// pre[i] => sum from 0 to ith index
	pre[0] = a[0];
	for(int i=1;i<n;i++){
		pre[i] = pre[i-1]+a[i];
		// i->1 pre[i-1]->a[0]   => pre[i] = a[0]+a[1]
		// i->2 pre[i-1]->a[0]+a[1] => pre[i] = (a[0]+a[1])+a[2]
		// i->3 pre[i-1]->a[0]+a[1]+a[2] => pre[i] = pre[i-1]+a[i]
	}
	for(int i=0;i<n;i++){
		cout << pre[i] << " ";
	}
	cout << endl;
	for(int i=0;i<5;i++){
		int lindex,rindex;
		cin >> lindex >> rindex;
		if(lindex==0){
			cout << pre[rindex] << endl;
		}
		else{
			cout << pre[rindex] - pre[lindex-1] << endl;
		}
	}


	return 0;
}