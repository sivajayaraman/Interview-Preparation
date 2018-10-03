#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements:"<<endl;
	map<int,int> count;
	int arr[n]={0};
	for(i=0;i<n;i++){
		cin>>arr[i];
		count[arr[i]]++;
	}
	cout<<"The Array is "<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	cout<<"The Repeating elements are..."<<endl;
	for(auto j:count){
		if(j.second>1){
			cout<<j.first<<endl;	
		}
	}
	return 0;
}