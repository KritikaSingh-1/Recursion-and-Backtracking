#include<bits/stdc++.h>
using namespace std;
bool possible(int color[],vector<pair<int,int> > edges,int node,int n,int col){
	for(int i=0;i<edges.size();i++){
		int x=edges[i].first;
			int y=edges[i].second;
	
		if((x==node && color[y]==col) || (y==node && color[x]==col)){
			return false;
		}
	}
	return true;
	
	
}
bool mcolor(int node,vector<pair<int,int> > &edges,int m,int n,int color[]){
	if(node==n){
		return true;
	}
	
	for(int i=1;i<=m;i++){
		if(possible(color,edges,node,n,i)){
			color[node]=i;
			if(mcolor(node+1,edges,m,n,color)){
				return true;
			}
			color[node]=0;
		}
	}
	return false;
}
int main(){
	int n,m,e;
	cin>>n>>m>>e;
	vector<pair<int,int> > edges;
	int a,b;
	for(int i=0;i<e;i++){
		cin>>a>>b;
		edges.push_back({a,b});
	} 
    int color[n]={0};
	cout<<	mcolor(0,edges,m,n,color);
	return 0;
}
