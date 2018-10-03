#include <iostream>
using namespace std; 
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int i,j,k;
	for(i=0;i<len;i++){
		for(j=i;j<len;j++){
			for(k=i;k<=j;k++){
					cout<<s[k];
			}
			cout<<endl;
		}
	}
	return 0;
}