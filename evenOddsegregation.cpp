#include <iostream>
using namespace std;
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void eoSeg(int arr[],int n){
	int low=0,high=n-1,i;
	while(low<high){
		while(arr[low]%2==0 && low<high)
			low++;
		while(arr[high]%2!=0 && low<high)
			high--;
		if(low<high){
			swap(&arr[low],&arr[high]);
			low++;
			high--;
		}
	}
	cout<<"After Segregation...."<<endl<<"\t"<<"{ ";
	for(i=0;i<n;i++){
		cout<<arr[i];
		if(i<n-1)
			cout<<",";
	}	
	cout<<" }"<<endl;
}
int main(){
	int n,i;
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
	eoSeg(arr,n);
}