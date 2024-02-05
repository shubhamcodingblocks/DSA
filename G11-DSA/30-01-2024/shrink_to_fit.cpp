#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> a;
	cout << a.size() << " " << a.capacity() << endl;
	a.push_back(1);
	cout << a.size() << " " << a.capacity() << endl;
	a.push_back(2);
	cout << a.size() << " " << a.capacity() << endl;
	a.push_back(3);
	cout << a.size() << " " << a.capacity() << endl;
	a.push_back(4);
	cout << a.size() << " " << a.capacity() << endl;
	a.push_back(5);
	cout << a.size() << " " << a.capacity() << endl;

	a.shrink_to_fit();
	cout << a.size() << " " << a.capacity() << endl;

	a.push_back(6);
	cout << a.size() << " " << a.capacity() << endl;
	return 0;
}