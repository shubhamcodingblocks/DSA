#include<iostream>
using namespace std;

int main(){
    // int a[10]; cannot change its size.
    // we can change the size of dynamic array
    // by doing:
    // by doing:
    int * a = new int[10];
    for(int i=0;i<10;i++){
        a[i] = i+1;
    }
    int * b = new int[20];
    for(int i=0;i<10;i++){
        b[i] = a[i];
    }
    delete[] a;
    a = b;
    for(int i=0;i<20;i++){
        cout << a[i] << " ";
    }
    return 0;
}