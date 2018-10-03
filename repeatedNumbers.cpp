//By the problem statement, Array elemnts vary form 1 to n only.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,flag=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements...."<<endl;
	int arr[n],countArr[n+1]={0};
	for(i=0;i<n;i++){
		cin>>arr[i];
		countArr[arr[i]]++;
	}
	cout<<"The Array is...."<<endl<<"\t"<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];;
		if(i<n-1)
			cout<<",";
	}
	cout<<" }"<<endl;
	for(i=0;i<=n;i++){
		if(countArr[i]>=2){
			cout<<i<<" is repeated."<<endl;
			flag=1;
		}
	}
	if(flag==0) cout<<"No Array element was repeated!"<<endl;
	return 0;
}