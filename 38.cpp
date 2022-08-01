//38	Minimum swaps required bring elements less equal K together
#include<iostream>
#include<deque>
#include<limits.h>
#include<algorithm>
using namespace std;
void Minimum_swaps_required(int a[],int n,int k){//{2,7,9,5,8,7,4}
	int good=0,bad=0;
	for(int i=0;i<n;i++){
		if(a[i]<=k){
			good++;
		}
	}//3
	for(int i=0;i<good;i++){
		if(a[i]>k){
			bad++;
		}
	}//2
	int i=0,j=good,ans=bad;
	while(j<n){
		if(a[i]>k){
			bad--;
		}
		if(a[j]>k){
			bad++;
		}
		ans=min(ans,bad);
		i++;j++;
	}
	cout<<ans;
}
int main(){
	int x;
	int a[]={2,7,9,5,8,7,4};
	int n=sizeof(a)/sizeof(int);
	Minimum_swaps_required(a,n,5);
	cin>>x;
	return 0;
}
