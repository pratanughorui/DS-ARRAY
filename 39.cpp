//39	Minimum no. of operations required to make an array palindrome
#include<iostream>
using namespace std;
void Minimum_operation_required(int a[],int n){
	int ans=0;int i=0;int j=n-1;
	while(i<=j){
		if(a[i]==a[j]){
			i++;j--;
		}else if(a[i]<a[j]){
			i++;
			a[i]=a[i]+a[i-1];
			ans++;
		}else{
			j--;
			a[j]=a[j]+a[j+1];
			ans++;
		}
	}
	cout<<ans;
}
int main(){
	int x;
	int a[]={11,14,15,99};
	int n=sizeof(a)/sizeof(int);
	Minimum_operation_required(a,n);
	cin>>x;
	return 0;
}
