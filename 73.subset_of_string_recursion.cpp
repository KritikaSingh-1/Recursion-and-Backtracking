#include<iostream>
using namespace std;

void subsetOfString(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return ;
	}
	char ch=str[0];
	string ros=str.substr(1);
	subsetOfString(ros,ans);
	subsetOfString(ros,ans+ch);
	
}

int main(){
	string str;
	cin>>str;
	subsetOfString(str,"");
	return 0;
}
