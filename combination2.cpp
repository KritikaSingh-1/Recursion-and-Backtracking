#include<iostream>
#include<vector>
using namespace std;

void combination(int idx,vector<int> &a,int x,vector<int> &res){	
		if(x==0){
		    int i=0;
		    while(i<res.size()){
		    	cout<<res[i]<<" ";
	            i++;
	    	}
	    	cout<<endl;
	     	return;
	   }
	    
    for(int  i=idx;i<a.size();i++){
    	if(i>idx && a[i]==a[i-1]){
    		continue;
		}
		else if(a[i]>x){
			break;
		}
		else{
			res.push_back(a[i]);
			combination(i+1,a,x-a[i],res);
			res.pop_back();
		}
	}
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
