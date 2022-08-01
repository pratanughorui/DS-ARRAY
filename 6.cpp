//6	Reverse the array
#include<iostream>
using namespace std;
int* reverse(int arr[],int n){
	
      int l=0,r=n-1;
      int temp=0;
      while(l<r){
      	temp=arr[l];
      	arr[l]=arr[r];
      	arr[r]=temp;
      	l++;
      	r--;
	  }
	  return arr;
}
int main(){
	int x;
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(int);
	int* reverse_arr=reverse(arr,n);
for(int i=0;i<n;i++){
		cout<<reverse_arr[i];
	}
	cin>>x;
	return 0;
}
