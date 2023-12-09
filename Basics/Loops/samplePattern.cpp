/* For patterns Rules to make a given pattern : 1 ) for outer loop : count the number of Rows .  2 ) for the inner loop : focus of the columns and connect them somehow to the rows 
3 ) Print everything in the inside for loops
4 ) observe symmetry 
*/

/* 
 SAMPLE PATTERN 
 ****
 ****
 ****
 ****

 
 */

//TIME COMPLEXITY WILL >= N^2 

#include<iostream>
using namespace std;

int main(){
	int n;
	for(int i =0 ;i<4;i++){
		for (int j=0; j < 4 ; j++){
			cout<< "* ";
		
		}
		cout<<endl;
	}
}
