/*  Find the Pivot Point.
	A Pivot Point of a Sorted,Rotated Array is the point after which the element following is smaller than the point.
	Now divide the Main array into two subarrays and proceed the Binary Search. 
	NOTE: This Works only when the Array is sorted and it is Rotated.*/
#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int low,int high,int key){
	if(high<low)
		return -1;
	int mid= (high+low)/2;
	if( key == arr[mid])
		return mid;
	if(key>arr[mid])
		return binarySearch(arr, mid+1,high,key);
	if(key<arr[mid])
		return binarySearch(arr,low,mid-1,key);
}
int main(){
	int n,i,j=1,pivot_point,pivot_element,key;
	cout<<"Enter the Array Size:";
	cin>>n;
	int arr[n]={0};
	cout<<"Enter the Array Elements:"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<"Enter the Element to be searched....";
	cin>>key;
	int flag=0,search;
	for(i=0;i<n;i++){
		if(arr[i]>arr[j]){
			pivot_element=arr[i];
			pivot_point=i;
			flag=1;
			break;
		}
		j++;
	}	
	if(flag!=0){
		cout<<"Pivot Element is "<<pivot_element<<endl;
		cout<<"Pivot Point is "<<pivot_point+1<<endl;
		if(arr[pivot_point]==key)
			search=pivot_point;
		else if(arr[0]<=key)
			search=binarySearch(arr,0,pivot_point-1,key);
		else 
			search=binarySearch(arr,pivot_point+1,n-1,key);	
	}	
	else search=binarySearch(arr,0,n-1,key);
	if(search==-1) 
		cout<<"Element Not present!";
	else 
		cout<<"Element present at "<<search+1<<endl;
	return 0;
}	