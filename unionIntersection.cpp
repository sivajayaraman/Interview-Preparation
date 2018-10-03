#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,n,m,x;
	map<int,int> arr;
	cout<<"Enter the Size of first Set:";
	cin>>n;
	cout<<"Enter the Set:";
	for(i=0;i<n;i++){
		cin>>x;
		arr[x]++;
	}
	cout<<"Enter the Size of Second Set:";
	cin>>m;
	cout<<"Enter the Set:";
	for(i=0;i<m;i++){
		cin>>x;
		arr[x]++;
	}
	for(auto p : arr) {
		if(p.second>=1)
		{
			cout<<p.first<<" ";
		}
	}
	cout<<endl;
	for(auto p : arr) {
		if(p.second==2)
		{
			cout<<p.first<<" ";
		}
	}
	return 0;
}