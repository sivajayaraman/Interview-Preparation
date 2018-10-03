#include <iostream>
using namespace std;
class twoStack{
	int top1,top2;
	int *arr;
	int size;
public:
	twoStack(int n){
		size=n;
		arr=new int[n];
		top1=-1;
		top2=size;
	}
	void push1(int x){
		if(top1<top2-1){
			top1++;
			arr[top1]=x;
		}
		else cout<<"Stack Overflow!"<<endl;
	}
	void push2(int x){
		if(top1<top2-1){
			top2--;
			arr[top2]=x;
		}
		else cout<<"Stack Overflow!"<<endl;
	}
	void pop1(){
		if(top1>=0){
			int x=arr[top1];
			top1--;
			cout<<"The Element Poped from Stack 1 is "<<x<<endl;
		}
		else cout<<"Stack Underflow!"<<endl;
	}
	void pop2(){
		if(top2<size){
			int x=arr[top2];
			top2++;
			cout<<"The Element Poped from Stack 1 is "<<x<<endl;
		}
		else cout<<"Stack Underflow!"<<endl;
	}
	void print(){
		int i;
		if(top1>=0){
			cout<<"The Stack1 is ";	
			for(i=0;i<=top1;i++){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else cout<<"Stack 1 Underflow!"<<endl;
		if(top2<size){
			cout<<"The Stack2 is ";	
			for(i=size-1;i>top2;i--){
				cout<<arr[i]<<" ";
			}
			cout<<endl;
		}
		else cout<<"Stack 2 Underflow!"<<endl;
	}		
};
int main(){
	int n1,n2,choice,x,stack;
	cout<<"Enter the Stack 1 Size:";
	cin>>n2;
	cout<<"Enter the Stack 2 Size:";
	cin>>n1;
	twoStack t(n1+n2);
	while(choice!=4){
		cout<<"1.Push"<<endl<<"2.Pop"<<endl<<"3.Print"<<endl<<"4.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		if(choice==1){
			cout<<"Enter the Element to be pushed:";
			cin>>x;
			cout<<"Select the Stack(1,2) to Push Element:";
			cin>>stack;
			if(stack==1) t.push1(x);
			else if(stack==2) t.push2(x);
			else cout<<"Enter a valid Stack Number!"<<endl;
		}
		else if(choice==2){
			cout<<"Select the Stack(1,2) to Pop Element:";
			cin>>stack;
			if(stack==1) t.pop1();
			else if(stack==2) t.pop2();
			else cout<<"Enter a valid Stack Number!"<<endl;
		}
		else if(choice==3){
			t.print();
		}
		else if(choice!=4) cout<<"Enter a valid Choice!"<<endl;
		else cout<<"Good Bye!"<<endl;	
	}
	return 0;
}