#include <bits/stdc++.h>
using namespace std;
int main(){
	int i,j,k=0,row,column,flag=0,startingRow,startingColumn;
	char path[101];
	cin>>path;
	cin>>row>>column;
	int matrix[row][column],sol[strlen(path)]={0};
	for(i=0;i<row;i++){
		for(j=0;j<column;j++){
			cin>>matrix[i][j];
		}
	}
	cin>>startingRow>>startingColumn;
	startingColumn=startingColumn-1;
	startingRow=startingRow-1;
    sol[k++]=matrix[startingRow][startingColumn];
    for(i=0;i<strlen(path);i++){
	    if(path[i]=='<'){
		    if(startingColumn-1<column && startingRow<row && startingColumn-1>=0 ){
		    	startingColumn--;
		    }
	    	else flag=1;
	    }
	    else if(path[i]=='>'){
	    	if(startingColumn+1<column && startingRow<row){
	    		startingColumn++;	
	     	}
	    	else flag=1;
	    }
	    else if(path[i]=='^'){
	    	if(startingColumn<column && startingRow-1<row && startingRow-1>=0){
	    		startingRow--;
	    	}
		    else flag=1;
    	}
    	else if(path[i]=='v' || path[i]=='V'){
    		if(startingColumn<column && startingRow+1<row){
    		    startingRow++;
   			}
    		else flag=1;
    	}
    	if(flag==1) break;
       	else sol[k++]=matrix[startingRow][startingColumn];
	}
	if(flag!=1 && sol[k-1]==-1){
		for(i=0;i<k-1;i++){
			cout<<sol[i]<<" ";
		}
	}
	else cout<<"invalid path"<<endl;
return 0;
}