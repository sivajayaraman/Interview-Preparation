#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x,ceil=-1,floor=-1;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements...."<<endl;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<"The Sorted Array is...."<<endl<<"\t"<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];;
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	cout<<"Enter the Key: ";
	cin>>x;
	for(i=0;i<n;i++){
		if(arr[i]<=x)
			floor=arr[i];
		if(arr[i]>=x){
			ceil=arr[i];
			break;
		}
	}
	if(ceil!=-1)
		cout<<"Ceil of given Key:"<<ceil<<endl;
	else cout<<"Ceil doesnt exist in the Array!"<<endl;
	if(floor!=-1)
		cout<<"Floor of given Key:"<<floor<<endl;
	else cout<<"Floor doesnt exist in the Array!"<<endl;
 return 0;
}