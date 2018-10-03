#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements...."<<endl;
	int arr[n]={0};
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]!=0){
			arr[count++]=arr[i];
		}
	}
	while(count<n){
		arr[count++]=0;
	}
	cout<<"The Array is "<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	return 0;
}