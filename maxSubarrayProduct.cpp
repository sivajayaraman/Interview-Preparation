#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min(int x,int y){ return x>y?y:x;}
int max(int x,int y){ return x>y?x:y;}
int main(){
	int n,i,min_now=1,max_now=1,max_so_far=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements:"<<endl;
	int arr[n]={0};
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The Array is "<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	for(i=0;i<n;i++){
		if(arr[i]>0){
			max_now=max_now*arr[i];
			min_now=min(1,min_now*arr[i]);		
		}
		else if(arr[i]==0){
			max_now=1;
			min_now=1;
		}
		else{
			int temp=min_now;
			min_now=max_now*arr[i];
			max_now=max(temp*arr[i],1);
		}
		if(max_now>max_so_far){
			max_so_far=max_now;
		}
	}
	cout<<"The Maximum Subarray Product is "<<max_so_far<<endl;
	return 0;
}