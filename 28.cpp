//28	find maximum product subarray 
#include<iostream>
#include<algorithm>
using namespace std;
void max_product(int a[],int n){//{2,3,-2,4,5}
	int mox=a[0],mon=a[0];
	int ans=a[0];
	for(int i=1;i<n;i++){
		mox=max(a[i],mox*a[i]);
		mon=min(a[i],mon*a[i]);
		if(a[i]<0){
			swap(mox,mon);
		}
		if(mox>ans){
			ans=mox;
		}
		
	}
	cout<<ans;
}
int main(){
	int x;
	int arr[]={2,3,-2,4,5};
	int n=sizeof(arr)/sizeof(int);
	max_product(arr,n);
	cin>>x;
	return 0;
}
