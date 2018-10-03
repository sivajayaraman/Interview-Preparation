#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x,t=1;
	cout<<"Enter the Array Size:";
	cin>>n;
	cout<<"Enter the Array Elements:"<<endl;
	map<int,int> count;
	for(i=0;i<n;i++){
		cin>>x;
		count[x]++;
	}
	for(auto j: count){
		if(j.first>0){
		    if(t!=j.first){
		        break;
		    }
		    t++;
		}
	}
	cout<<"The least positive number missing is "<<t<<endl;
 return 0;
}