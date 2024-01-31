#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    cout << a.size() << endl;
    a.resize(10);
    cout << a.size() << endl;
    a.push_back(4);
    for(int i=0;i<a.size();i++){
        cout << a[i] << " ";
    }
    return 0;
}