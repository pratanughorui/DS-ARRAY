//29	Find longest coinsecutive subsequence
#include<iostream>
#include<map>
#include<algorithm>
#include<limits.h>
using namespace std;
void longest_subsequence(int a[],int n){
     map<int,int> m;
     int c=1;int mox=INT_MIN;
     for(int i=0;i<n;i++){
     	m[a[i]]=1;
	 }
	 for(int i=0;i<n;i++){
	 	int q=a[i];
	 	if(m[q-1]==0){
	 		while(m[q+1]){
	 			c++;
	 			q++;
			 }
			 mox=max(mox,c);
			 c=1;
		 }
	 }
	 cout<<mox;
}
int main(){
	int x;
	int a[]={4,1,7,2,3,8};
	int n=sizeof(a)/sizeof(int);
	longest_subsequence(a,n);
	cin>>x;
	return 0;
}
