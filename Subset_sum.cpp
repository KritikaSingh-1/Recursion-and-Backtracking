#include<iostream>
#include<vector>
using namespace std;

void combination(int idx,vector<int> &a,int& sum){	
		if(idx==a.size()){
			cout<<sum<<" ";
			return;
		}
	    //cout<<sum<<" ";
   // for(int  i=idx;i<a.size();i++){
    	    sum=sum+a[idx];
			combination(idx+1,a,sum);
			sum=sum-a[idx];
			combination(idx+1,a,sum);
	//	}
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
	combination(0,a,sum);
	return 0;
}
