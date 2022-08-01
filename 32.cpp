//32	Find whether an array is a subset of another array
#include<iostream>
#include<map>
using namespace std;
void subset_checker(int a1[],int a2[],int n1,int n2){
	map <int,int> m;
	int i=0,j=0,c=0;
    while(i<n1 and j<n2){//int a1[]={10,5,2,23,19};int a2[]={19,5,2};
    	if(m[a1[i]]==0){
    		m[a1[i]]=1;
		}
		if(m[a2[j]]){
			c++;
			j++;
			i=0;
		}else{
			i++;
		}
    }
    if(c==n2){
    	cout<<"subset";
	}else{
		cout<<"not subset";
	}
	
}
int main(){
	int x;
	int a1[]={10,5,2,23,19};
	int a2[]={19,5,2};
	int n1=sizeof(a1)/sizeof(int);
	int n2=sizeof(a2)/sizeof(int);
	subset_checker(a1,a2,n1,n2);
	cin>>x;
	return 0;
}
