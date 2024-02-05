#include<iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	// in the case where num is a power of 2 , (num-1)'s leftmost set bit 
	// will become 0 and all the bits to the right of it will become 1
	// hence only in the case where num is a power of 2, (num&(num-1)) will
	// give 0. eg: 000...001000 -> 8 , 000...000111 -> 7 => num&(num-1) = 0.
	if((num&(num-1))==0){
		cout << "number is a power of 2" << endl;
	}
	else{
		cout << "number is not a power of 2" << endl;
	}
	return 0;
}
