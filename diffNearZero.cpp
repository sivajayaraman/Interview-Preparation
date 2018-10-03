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
	int sum=0,n,i,right,left=0,min_sum,l_index,r_index;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements:"<<endl;
	int *arr;
	arr=new int[n];
	right=n-1;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"The Array is ";
	print(arr,n);
	sort(arr,arr+n);
	min_sum=abs(arr[n-1]-arr[0]);
	while(left<right){
		sum=arr[left]+arr[right];
		if(abs(min_sum) > abs(sum)){
			min_sum=sum;
			l_index=left;
			r_index=right;
		}
		if(sum>0) right--;
		else left++;	
	}
	cout<<"The Sum nearer to Zero(0) is between elements "<<arr[l_index]<<" and "<<arr[r_index]<<endl;
	return 0;
}