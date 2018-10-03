#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,min=-1,i;
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
	set<int> heap;
	for(i=n-1;i>=0;i--){
		if(heap.find(arr[i])!= heap.end()){
			min=i;
		}
		else heap.insert(arr[i]);
	}
	if(min!=-1) cout<<"The First Repeating number is "<<arr[min]<<endl;
	else cout<<"There is no repeating element!"<<endl;
	return 0;
}