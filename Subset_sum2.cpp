#include<iostream>
#include<vector>
using namespace std;

void combination(int idx,vector<int> &a,vector<int> &res){
           
		
			for(int i=0;i<res.size();i++){
				cout<<res[i]<<" ";
			}
			cout<<endl;
	
	   
	    //cout<<sum<<" ";
   for(int  i=idx;i<a.size();i++){
       
		 if(i!=idx && a[i]==a[i-1]){
        	continue;
		}
        	res.push_back(a[i]);
			combination(i+1,a,res);
			res.pop_back();
			//combination(i+1,a,res);
			
	    
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
	int sum=0;
	vector<int> res;
	combination(0,a,res);
	return 0;
	
}
