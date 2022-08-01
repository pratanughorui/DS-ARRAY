//23	find all pairs on integer array whose sum is equal to given number
#include<iostream>
#include<map>
using namespace std;
void count(int a[],int n,int x){
	map<int,int> m;int c=0;
	
	for(int i=0;i<n;i++){
		int b=x-a[i];
		if(m[b]){
			c=c+m[b];
		}
			m[a[i]]++;

	}
	cout<<c;
}
int main(){
	int x;
	int a[]={2,5,4,1};
	int n=sizeof(a)/sizeof(int);
	count(a,n,6);
	cin>>x;
	return 0;
}
