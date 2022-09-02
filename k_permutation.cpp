#include<bits/stdc++.h>
using namespace std;

string getP(int n,int k){
	int fact=1;
	vector<int> num;
	for(int i=1;i<n;i++){
		fact=fact*i;
		num.push_back(i);
	}
	num.push_back(n);
	string ans="";
	k=k-1;
	while(true){
		ans=ans + to_string(num[k/fact]);
		num.erase(num.begin()+ k/fact);
		if(num.size()==0){
			break;
		}
		k=k%fact;
		fact=fact/num.size();
	}
	
	return ans;
	
}

int main(){
	int n,k;
	cin>>n>>k;
	 string str=getP(n,k);
	 cout<<str<<" ";
	
	return 0;
}
