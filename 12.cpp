//12	Write a program to cyclically rotate an array by one.
#include<iostream>
using namespace std;
void cyclically(int arr[],int n){
	int temp=arr[0];
	int t;
	for(int i=1;i<n;i++){
		t=arr[i];
		arr[i]=temp;
		temp=t;
	}
	arr[0]=temp;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int x;
	int arr[]={9,8,7,6,4,2,1,3};
	int n=sizeof(arr)/sizeof(int);
	cyclically(arr,n);
	cin>>x;
	return 0;
}
