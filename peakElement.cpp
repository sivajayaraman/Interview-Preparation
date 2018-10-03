#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,peak,peak_index;
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
	for(i=1;i<n-1;i++){
		if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
			cout<<"The Peak Element is "<<arr[i]<<endl;
			cout<<"The Index of Peak Element is "<<i+1<<endl;
		}
	}
	return 0;
}