#include <iostream>
using namespace std; 
int main(){
	string s;
	cin>>s;
	int len=s.length();
	int i,j,k;
	for(i=1;i<=len;i++){
		for(j=0;j<=len-i;j++){
			for(k=j;k<=j+i-1;k++){
					cout<<s[k];
			}
			cout<<endl;
		}
	}
	return 0;
}