#include <iostream>
using namespace std;
int printPrime(int n){
	while(1){
		for(i=2;;i++){
			
		}
	}
}
int printComposite(){

}
int main(){
	int n,i,j,prime=1,composite=3;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				composite=printComposite(composite);
				cout<<composite<<" ";
			}
			else {
				prime=printPrime(prime);
				cout<<prime<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}