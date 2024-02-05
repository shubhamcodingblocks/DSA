#include<iostream>
#include<vector>
using namespace std;

int main(){
    // vector<int> a = {1,2,3,4};
    // for(int i=0;i<a.size();i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // vector<int> b {1,2,3,4,5};
    // for(int i=0;i<b.size();i++){
    //     cout << b[i] << " ";
    // }

    int a[10] = {1,2};
    vector<int> v(a,a+10);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    return 0;
}