#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,count=0,len=1;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements...."<<endl;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The Array is...."<<endl<<"\t"<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];;
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	for(i=0;i<n-1;i++){
		if(arr[i+1]>arr[i]){
			len++;
		}
		else {
			count=count+(len*(len-1)/2);
			len=1;
		}
	}
	if(len>1){
		count=count+(len*(len-1)/2);
	}
	cout<<"The Count of Strictly Increasing Subarray is "<<count<<endl;
	return 0;
}