#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,index,flag=0,element;
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
	cout<<"Enter the element to be Deleted:";
	cin>>element;
	j=n-1;
	for(i=0;i<=n/2;i++){
		if(arr[i]==element){
			index=i;
			flag=1;
			break;
		}
		if(arr[j]==element){
			index=j;
			flag=1;
			break;
		}
	}
	if(flag==1){
		for(j=index;j<n;j++){
			arr[j]=arr[j+1];
		}
		n=n-1;
		cout<<"The Array after Deletion :"<<endl<<"\t"<<"{ ";
		for(i=0;i<n;i++){
			cout<<arr[i];;
			if(i<n-1)
				cout<<",";
		}
		cout<<" }"<<endl;
	}
	else  cout<<"Element not present in the Array!"<<endl;
	return 0;
}