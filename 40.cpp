//40	Median of 2 sorted arrays of equal size
#include<iostream>
using namespace std;
void median(int a[],int b[],int n1,int n2){
	int m1,m2,c=0;
	int i=0,j=0;
	while(c<n1 and c<n2){
		if(a[i]<a[j]){
			m2=b[j];
			m1=a[i];
			i++;
			c++;
		}else{
			m2=b[j];
			m1=a[i];
			j++;
			c++;
		}
	}
	cout<<m1<<m2;
}
int main(){
	int x;
	int a[]={1,5,10,15};
	int b[]={2,6,7,8};
	int n1=sizeof(a)/sizeof(int);
	int n2=sizeof(b)/sizeof(int);
	median(a,b,n1,n2);
	cin>>x;
	return 0;
}
