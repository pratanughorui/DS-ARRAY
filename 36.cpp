//36	Smallest Subarray with sum greater than a given value
#include<iostream>
#include<limits.h>
using namespace std;
void small(int a[],int n,int x){
	int i=0,j=0,s=0;
	int mi=INT_MAX;
	while(i<=j and j<n){
	while(s<=x and j<n){
		s=s+a[j++];
	}	
	
	while(s>x and i<j){
		mi=min(mi,j-i);
		s=s-a[i];
		i++;
	}
}
	cout<<mi;
}
int main(){
	int x;
	int a[]={1,10,5,2,7};
	int n=sizeof(a)/sizeof(int);
	int k=9;
	small(a,n,k);
	cin>>x;
	return 0;
}
