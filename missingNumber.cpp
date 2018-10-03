#include <iostream>
#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;
int main(){
	int n,i,x,k=1,max=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	int arr[MAX]={0};
	cout<<"Enter Array Elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>x;
		arr[x]++;
		if(x>max)
			max=x;
	}
	for(i=1;i<=max;i++)
	{
		if(arr[i]==0){
			cout<<"Missing Number "<<k<<" :"<<i<<endl;
			k++;
		}
	}
	return 0;
}