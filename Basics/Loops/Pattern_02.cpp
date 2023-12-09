/*
1 
1 2 
1 2 3 
*/

#include <iostream>
using namespace std;

void nTriangle(int n) {
	// Write your code here
	for(int i =0 ; i < n ; i++){
		for(int j = 0 ; j <= i ; j++){
			cout<< j + 1<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	n= 3;
	nTriangle(n);

}
