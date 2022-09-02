#include<iostream>
using namespace std;

void permutString(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return ;
	}
	
	for(int i=0;i<str.length();i++){
		char ch=str[i];
		string ros= str.substr(0,i)+str.substr(i+1);
		permutString(ros,ch+ans);
	}
}

int main(){
	string str;
	cout<<"Enter the string:";
	cin>>str;
	permutString(str,"");
	
	return 0;
}
