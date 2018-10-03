//This program is written on an assumption that, All the elements, except one element, repeats exactly twice.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,res=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements...."<<endl;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		res=res^arr[i];
	}
	cout<<"The Array is...."<<endl<<"\t"<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
     if(res!=0)
     	cout<<"The Element that occur only once is "<<res<<endl;
     else 
     	cout<<"There is no such Element"<<endl;
return 0;
}