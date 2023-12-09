// Binary Search algorithm 
// element should be in monotonic function or increasing function
// step for Binary Search :
// #1 : divide the array in 2 parts the check whether the mid part = key
// 	n/2 = key ?
// 		true return i
// 		else check if key < mid or n/2 
// 				if true keep int i =0 to i< n/2 
//
// 			else new array (n/2 to n)
//
//Steps : 
//#1) find mid element 
//#2) compare mid with key 
//#3) check key < MID or key > MID ?
//#4) mid = ( s+e )/2 where s starting index and e ending index 
//	mod | (s+e)/2 |

#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size, int key){
	int start = 0 ;
	int end = size - 1 ;
	int mid = start + ( end - start )/2 ;
	while (start <= end){
		if(arr[mid]==key){
			return mid;
		}
		if(key > arr[mid]){
			start = mid + 1 ;

		}
		else{
			end = mid - 1 ;

		}
		mid = start + (end - start)/2;

		}
	return -1;
}

int main(){
	int even[6]={ 2,3,5,6,7,8};
	int odd[5]={ 2,3,4,5,6 };
	int evenIndex 
}
