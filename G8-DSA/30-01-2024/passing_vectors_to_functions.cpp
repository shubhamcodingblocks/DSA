#include<iostream>
#include<vector>
using namespace std;


void func1(vector<int> v){ // by value 
	int n = v.size();
	cout << n << endl;
	v[0] = 100;
}

void func2(vector<int>& v){ // by reference
	v[0] = 100;
}

int main(){
	vector<int> b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	cout << "before function calling: " << endl;
	for(int i=0;i<b.size();i++){
		cout << b[i] << " ";
	}
	func2(b);
	cout << endl << "after function calling: " << endl;
	for(int i=0;i<b.size();i++){
		cout << b[i] << " ";
	}
	return 0;
}