#include<iostream>
using namespace std;

string removedupli(string str){
	if(str.length()==0){
		return "";
	}
    char ch=str[0];
    string ans= removedupli(str.substr(1));
    if(ch==ans[0]){
    	return ans;
	}
	else{
		return ch+ans;
	}
}

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
    cout<<removedupli(str);
	return 0;
}
