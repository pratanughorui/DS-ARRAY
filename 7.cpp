//7	Find the maximum and minimum element in an array
#include<iostream>
using namespace std;
void max_min(int arr[],int n){
	int max=arr[0],min=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}else if(arr[i]<min){
			min=arr[i];
		}
	}
	cout<<max<<"\n";
	cout<<min;
}
int main(){
	int x;
	int arr[6]={2,5,1,6,3,4};
	int n=sizeof(arr)/sizeof(int);
	max_min(arr,n);

	cin>>x;
	return 0;
}
