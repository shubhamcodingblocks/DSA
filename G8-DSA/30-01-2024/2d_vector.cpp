#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> a;
    vector<int> temp1 {1,2,3,4,5};
    vector<int> temp2 {1,2,3,4,5,6};
    vector<int> temp3 {1,2,3,4,5,6,7};
    a.push_back(temp1);
    a.push_back(temp2);
    a.push_back(temp3);

    cout << a.size() << endl;
    cout << a[0].size() << endl;
    cout << a[1].size() << endl;
    cout << a[2].size() << endl;

    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }    
    return 0;
}