#include<iostream>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n = s.length();
	int ans = 0;
	for(int sz = 1; sz<=s.length();sz++){
		for(int l=0;l<n;l++){
			int r = l+sz-1;
			// check if r is less than n
			if(r>=n){
				continue;
			}
			// check if it is a good substring from l ... r
			bool isgood = true;
			for(int i=l;i<=r;i++){
				if(s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u'){
					continue;
				}
				else{
					isgood = false;
					break;
				}
			}
			if(isgood){
				ans = sz;
			}
		}
	}
	cout << ans << endl;
	return 0;
}