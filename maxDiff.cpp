#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,min_element,max_diff;
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
	min_element=arr[0];
	max_diff=arr[1]-arr[0];
	for(i=1;i<n;i++){
		if(arr[i]-min_element>max_diff)
			max_diff=arr[i]-min_element;
		if(arr[i]<min_element)
			min_element=arr[i];
	}
	cout<<"The Maximum Difference of the Array(for a smaller value followe by larger value) is "<<max_diff<<endl;
	return 0;
}	