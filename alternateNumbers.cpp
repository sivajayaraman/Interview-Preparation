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
int main(){
	int n,i,pos,j=-1,neg=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements:"<<endl;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The Array is ";
	print(arr,n);
	for(i=0;i<n;i++){
		if(arr[i]<0){
			j++;
			swap(arr[j],arr[i]);
		}
	}
	pos=j+1;
	while(neg<pos && pos<n && arr[neg]<0){
		swap(arr[neg],arr[pos]);
		pos++;
		neg=neg+2;
	}
	cout<<"The Modified Array is ";
	print(arr,n);
	return 0;
}