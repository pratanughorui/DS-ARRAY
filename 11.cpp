//11	Find the Union and Intersection of the two sorted arrays.
#include<iostream>
using namespace std;
void inter(int arr1[],int arr2[],int size1,int size2){
	int ans[100];
	int i=0,j=0,k=0;
	while(i<size1 and j<size2){
		if(arr2[j]<arr1[i]){
			j++;
		}else if(arr2[j]==arr1[i]){
			ans[k]=arr1[i];
			k++;
			i++;
			j++;
		}else{
			i++;
		}
	}
	for(int o=0;o<k;o++){
		cout<<ans[o]<<" ";
	}
}
void uni(int arr1[],int arr2[],int size1,int size2){
		int ans[100];
	int i=0,j=0,k=0;
	while(i<size1 and j<size2){
		if(arr2[j]<arr1[i]){
			ans[k]=arr2[j];
			k++;
			j++;
		}else if(arr2[j]==arr1[i]){
			ans[k]=arr1[i];
			k++;
			i++;
			j++;
		}else{
			ans[k]=arr1[i];
			k++;
			i++;
		}
	}
	if(size2>j){
		while(j<size2){
			ans[k]=arr2[j];
			j++;
			k++;
		}
	}if(size1>i){
			while(i<size1){
			ans[k]=arr1[i];
			i++;
			k++;
		}
	}
	for(int o=0;o<k;o++){
		cout<<ans[o]<<" ";
	}
}
int main(){
	int x;
	int arr1[]={2,3,4,7,8};
	int arr2[]={1,2,4,6,7,8,10};
	int size1=sizeof(arr1)/sizeof(int);
	int size2=sizeof(arr2)/sizeof(int);
	inter(arr1,arr2,size1,size2);
cout<<"\n";	
   uni(arr1,arr2,size1,size2);
	cin>>x;
	return 0;
}
