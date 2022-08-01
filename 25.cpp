//25	Rearrange the array in alternating positive and negative items with O(1) extra space
#include<iostream>
using namespace std;
void alternating(int a[],int n){
	int j=n-1,i=0;int c=0;
	while(i<n){
		if(a[i]>0 or a[j]<0){//{2,3,-4,-1,6,-9}
			if(a[i]>0) i++;
			if(a[j]<0) j--;
		}else{
			swap(a[i],a[j]);
		}
		if(i==j){
			break;
		}
	}//{2,3,6,-1,-4,-9}
	int k=0;
	while(i<n and k<n){
		if(a[k]>0 and a[i]<0){
			swap(a[k],a[i]);
			k=k+2;
			i++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	int c;
	int a[]={2,3,-4,-1,6,-9};
	int n=sizeof(a)/sizeof(int);
	alternating(a,n);
	cin>>c;
	return 0;
}
