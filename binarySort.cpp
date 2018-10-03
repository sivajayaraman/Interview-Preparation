#include <iostream>
using namespace std;
int main(){
	int n,i,countofZero=0;
	cout<<"Enter Array Size:";
	cin>>n;
	if(n>0){
		int arr[n];
		for(i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]==0)
				countofZero++;
			if(arr[i]!=0 && arr[i]!=1){
				cout<<"Invalid Input.By default, Element is considered as 0"<<endl;
				arr[i]=0;
				countofZero++;
			}
		}
		cout<<"The Array is ...."<<endl<<"\t";
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		for(i=0;i<countofZero;i++){
			arr[i]=0;
		}
		for(i=countofZero;i<n;i++){
			arr[i]=1;
		}
		cout<<endl<<"The Sorted Array is...."<<endl<<"\t";
		for(i=0;i<n;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	else 
		cout<<"Enter a valid Array Size!"<<endl;
	return 0;
}