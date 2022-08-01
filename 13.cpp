//13	find Largest sum contiguous Subarray [V. IMP]
#include<iostream>
#include<limits.h>
using namespace std;
void max_subarray(int arr[],int n){
	int max=INT_MIN;int s=0;
    for(int i=0;i<n;i++){
    	s=s+arr[i];
    	if(max<s){
    		max=s;
		}
		if(s<0){
			s=0;
		}
	}
	cout<<max;
}
int main(){
	int x;
	int arr[]={7,5,-13,5,10,-2,5};
	int n=sizeof(arr)/sizeof(int);
	max_subarray(arr,n);
	cin>>x;
	return 0;
}
