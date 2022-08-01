//35	Chocolate Distribution problem
#include<iostream>
#include<queue>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;
showdq(deque<int> d){
	deque <int> :: iterator i;
	for(i=d.begin();i!=d.end();++i){
		cout<<*i<<"  ";
	}
	cout<<"\n";
}
int maxd(deque<int> d){
	int max=INT_MIN;
	while(!d.empty()){
		if(max<d.front()){
			max=d.front();
		}
		d.pop_front();
	}
	return max;
}
int mind(deque<int> d){
	int min=INT_MAX;
	while(!d.empty()){
		if(min>d.front()){
			min=d.front();
		}
		d.pop_front();
	}return min;
}
void chocolate(int a[],int n,int m){
	int i;
	sort(a,a+n);
	deque<int> d;int max,min;int ans;
	for(i=0;i<m;i++){
		d.push_back(a[i]);
	}
	min=mind(d);
	max=maxd(d);
	ans=max-min;

	for(;i<n;i++){
		d.pop_front();
		d.push_back(a[i]);
		min=mind(d);
	    max=maxd(d);
		if(ans>(max-min)){
			ans=(max-min);
		}
	}
	cout<<ans;
	
	
}
int main(){
	int x;
	int arr[]={2,5,7,1,3};
	int m=3;
	int n=sizeof(arr)/sizeof(int);
	chocolate(arr,n,m);
	cin>>x;
	return 0;
}
