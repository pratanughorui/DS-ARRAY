//26	Find if there is any subarray with sum equal to 0
#include<iostream>
#include<map>
using namespace std;
void subarray(int a[],int n){
	map<int,int> m;
	int s=0;
	int f=0;
	for(int i=0;i<n;i++){
		s=s+a[i];
		if(a[i]==0 or m[s] or s==0){
			f=1;break;
		}else{
			m[s]=1;
		}
	}
	if(f==1){
		cout<<"yes";
	}else{
		cout<<"no";
	}
}
int main(){
	int x;
	int a[]={1,4,4,-4};
	int n=sizeof(a)/sizeof(int);
	subarray(a,n);
	cin>>x;
	return 0;
}
