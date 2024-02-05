#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    if(a.empty()==true){
        cout << "vector is empty" << endl;
    }
    else{
        cout << "vector is not empty" << endl;
    }
    a.push_back(1);
    if(a.empty()==true){
        cout << "vector is empty" << endl;
    }
    else{
        cout << "vector is not empty" << endl;
    }
    return 0;
}