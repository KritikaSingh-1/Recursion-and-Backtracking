#include<iostream>
#include<vector>
using namespace std;

void combination(int idx,vector<int> &a){
           
	if(idx==a.size()){
	
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		return;
    }
	   
	    //cout<<sum<<" ";
    for(int  i=idx;i<a.size();i++){
   	
            swap(a[idx],a[i]);
            combination(idx+1,a);
            swap(a[idx],a[i]);
			
	    
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
	
	combination(0,a);
	return 0;
	
}
