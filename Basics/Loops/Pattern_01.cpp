#include<iostream>
using namespace std;

void nForest(int n) {
	// Write your code here.
	for(int i= 1 ;i <=n ; i++){
		for(int j = 0 ; j< i;j++ ){
			cout << "* ";
		}
		cout<<"\n";
	}
}

int main(){
	int n;
	n = 3;
	nForest(n);
}
