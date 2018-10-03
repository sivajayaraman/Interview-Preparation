#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k,n,max=0,sum=0;
	cout<<"Enter the Array Size:";
	cin>>n;
	int arr[n]={0};
	cout<<"Enter the Array Elements:";
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum=0;
			for(k=i;k<=j;k++){
				sum=sum+arr[k];
			}
			if(sum>max)
				max=sum;
		}
	}
	cout<<"The Maximum Subarray Sum is "<<max<<endl;
 return 0;
}