#include <bits/stdc++.h>
using namespace std;
int main(){
	int total,i,j,row,col,rowMin=0,rowMax=0,colMin=0,colMax=0,right=1,left,up,down;
	cin>>row>>col;
	int matrix[row][col];
	total=row*col;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			cin>>matrix[i][j];
		}
	}
	i=0,j=-1;
	while(total--){
		if(right==1){
			if(colMax<col){
				j++;
				colMax++;
			}
			else{
				i++;
				right=0;
				down=1;
				row--;
				rowMin++;
			}
		}
		else if(left==1){
			if(colMax>=colMin){
				j--;
				colMax--;
			}
			else{
				i--;
				up=1;
				left=0;	
				row--;
				rowMax=row;
				j=col-colMin+1;
			}
		}
		else if(up==1){
			if(rowMax>=rowMin){
				i--;
				rowMax--;
			}
			else{
				j++;
				right=1;
				up=0;
			}	
		}
		else if(down==1){
			if(rowMax<row-1){
				i++;
				rowMax++;
			}
			else{
				j--;
				left=1;
				down=0;
				col--;
				colMax=col;
				i=row-rowMin+1;
			}	
		}
		cout<<matrix[i][j]<<" ";
	}
	cout<<endl;
return 0;
}