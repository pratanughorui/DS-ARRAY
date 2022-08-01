 //33	Find the triplet that sum to a given value
#include<iostream>
#include<algorithm>
using namespace std;
void triplet(int a[],int n,int x){
	sort(a,a+n);
	int j=0,k=0;//1,3,4,6,9,12
	for(int i=0;i<n-2;i++){
		j=i+1;
		k=n-1;
		int s=x-a[i];
		while(j<k){
			if(a[j]+a[k]==s){
				cout<<a[i]<<" "<<a[j]<<" "<<a[k];
				return;
			}else if(a[j]+a[k]<s){
				j++;
			}else{
				k--;
			}
		}
	}
}
int main(){
	int x;
	int a[]={12,3,4,1,6,9};
	
	int n=sizeof(a)/sizeof(int);
	int k=25;
	triplet(a,n,k);
	cin>>x;
	return 0;
}
