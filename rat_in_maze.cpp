#include<bits/stdc++.h>
using namespace std;
const int ni=4;
bool path(int i,int j,int n,int arr[ni][ni],vector<vector<int> >& res){
	if(i==n-1 && j==n-1){
		return true;
	}
	
	if(arr[i][j]==1){
		res[i][j]=1;
		if(i+1 >=0 && i+1<n){
			if(	path(i+1,j,n,arr,res)){
				return true;
			}
		}
		if(i-1 >=0 && i-1<n){
			if(	path(i-1,j,n,arr,res)){
				return true;
			}
		}
		if(j+1 >=0 && j+1<n){
			if(	path(i,j+1,n,arr,res)){
				return true;
			}
		}
		if(j-1 >=0 && j-1<n){
			if(	path(i,j-1,n,arr,res)){
				return true;
			}
		}
		res[i][j]=0;
		return false;
		
	}
}

int main(){
	int n;
	cin>>n;
	int arr[][n]={{1,0,0,0},
	               {1,1,0,0},
				   {1,1,0,0},
				   {0,1,1,1}
					
				  };
				  
	vector< vector<int> > res(n, vector<int> (n,0));
	
	
	path(0,0,n,arr,res);			  
	return 0;
}
