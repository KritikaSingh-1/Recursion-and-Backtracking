#include<iostream>
#include<vector>
using namespace std;
void combination(int idx,vector<int> &a,int x,vector<int> &res){
	if(idx==a.size()){
		if(x==0){
		    int i=0;
		    while(i<res.size()){
		    	cout<<res[i]<<" ";
	            i++;
	    	}
	    	cout<<endl;
	     	return;
	   }
	   else{
	   	return;
	   }
    }   
    if(a[idx]<=x){
    	res.push_back(a[idx]);
    	combination(idx,a,x-a[idx],res);
    	res.pop_back();
	}
	combination(idx+1,a,x,res);
}

int main(){
	vector<int> a;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		a.push_back(x);
	}
	cin>>x;
	
	vector<int> res;
	
	combination(0,a,x,res);
	
	
	return 0;
}
