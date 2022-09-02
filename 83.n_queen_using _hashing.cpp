#include<bits/stdc++.h>
using namespace std;

bool nQueen(int col,vector<string> &board,vector< vector<string> > &ans,vector<int> &leftRow,vector<int> &upperDiagonal,vector<int> &lowerDiagonal,int n){
	if(col==n){
		ans.push_back(board);
		return true;
	}
	for(int row=0;row<n;row++){
		if(leftRow[row]==0 && upperDiagonal[n-1+ col-row]==0 && lowerDiagonal[row+col]==0){
			board[row][col]='1';
			leftRow[row]=1;
			lowerDiagonal[row+col]=1;
			upperDiagonal[n-1 + col-row]=1;
			if(nQueen(col+1,board,ans,leftRow,upperDiagonal,lowerDiagonal,n)){
				return true;
			}
			board[row][col]='0';
			leftRow[row]=0;
			lowerDiagonal[row+col]=0;
			upperDiagonal[n-1 + col-row]=0;
		}
	}
	
	return false;
}

int main(){
	int n;
	cin>>n;
	vector< vector<string> > ans;
	vector<string> board(n);
	string s(n, '0');
	for(int i=0;i<n;i++){
		board[i]=s;
	}
	vector<int> leftRow(n,0),upperDiagonal(2*n -1,0),lowerDiagonal(2*n-1,0);
	
	if(nQueen(0,board,ans,leftRow,upperDiagonal,lowerDiagonal,n)){
		for(int i=0;i<n;i++){
		     for(int j=0;j<n;j++){
			   cout<<ans[i][j]<<" ";
	     	}
	    	cout<<endl;
	    }
	}
	else{
		cout<<"invalid";
	}
	 return 0;
}
