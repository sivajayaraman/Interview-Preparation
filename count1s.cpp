#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
void print(int arr[],int n){
	int i;
	cout<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
}
int binarysearch(int arr[],int low,int high){
	if(high>=low){
		int mid=(high+low)/2;
		if((mid==high || arr[mid+1]==0) && arr[mid]==1)
			return mid+1;
		if(arr[mid]==1)
			return binarysearch(arr,mid+1,high);
		return binarysearch(arr,low,mid-1);
	}	
	return 0;
}
int main(){
	int n,i,count;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Binary Sorted Array Elements(in Descending Order):"<<endl;
	int arr[n]={0};
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The Array is ";
	print(arr,n);
	count=binarysearch(arr,0,n);
	cout<<"The Number of 1's in the given array is "<<count<<endl;
return 0;
}