#include<iostream>
#include<vector>
using namespace std;


int main(){
    int a[10];
    int n = sizeof(a)/sizeof(int);
    cout << "size of array: " << n << endl;

    vector<int> b; // empty
    b.push_back(1); // 1
    b.push_back(2); // 1 2
    b.push_back(3); // 1 2 3
    b.push_back(4); // 1 2 3 4
    b.push_back(5); // 1 2 3 4 5

    // find the size of vector
    cout << "size of vector: " << b.size() << endl;
    return 0;
}