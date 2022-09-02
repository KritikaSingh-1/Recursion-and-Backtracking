#include<bits/stdc++.h>
using namespace std;

bool palindromecheck(string s,int st,int e){

	while(st<=e){
		if(s[st++]!=s[e--]){
			return false;
		}
	}
	return true;
}

void palindrome(int idx,string s,vector<string > &v,vector<vector<string> > &res){
	if(idx==s.size()){
		res.push_back(v);
		return ;
	}
	for(int i=idx;i<s.size();i++){
		if(palindromecheck(s,idx,i)==true){
			v.push_back(s.substr(idx,i-idx+1));
			palindrome(i+1,s,v,res);
			v.pop_back();
		}
	}
	
}

int main(){
	string s;
	cin>>s;
	vector<vector<string> > res;
	vector<string > v;
	palindrome(0,s,v,res);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	} 
	return 0;
}
