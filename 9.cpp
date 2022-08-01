//9	Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo
#include<iostream>
using namespace std;
void sort(int a[],int n){
	int c0=0,c1=0,c2=0;
	for(int i=0;i<n;i++){
		if(a[i]==0) c0++;
		else if(a[i]==1) c1++;
		else c2++;
	}
	int k=0;
	for(int i=0;i<c0;i++) a[k++]=0;
	for(int i=0;i<c1;i++) a[k++]=1;
	for(int i=0;i<c2;i++) a[k++]=2;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int x;
	int arr[]={0,2,1,2,0};
	int n=sizeof(arr)/sizeof(int);
	sort(arr,n);
	cin>>x;
	return 0;
}
