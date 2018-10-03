#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,zero=0,one=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements consisting only 0s,1s and 2s"<<endl;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0) zero++;
		else if(arr[i]==1) one++;
	}
	cout<<"The Array is "<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	cout<<"The Sorted Array is "<<"{ ";
	for(i=0;i<zero;i++){
		cout<<0<<" ";			
	}
	for(i=0;i<one;i++){
		cout<<1<<" ";
	}
	for(i=0;i<n-one-zero;i++){
		cout<<2<<" ";
	}
	cout<<"}"<<endl;	
return 0;
}