#include<iostream>
using namespace std;

void substringASCII(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=str[0];
	int ascii=ch;
	string ros=str.substr(1);
	substringASCII(ros,ans);
	substringASCII(ros,ans+ch);
	substringASCII(ros,ans+to_string(ascii));
}

int main(){
	string str;
	cin>>str;
	substringASCII(str,"");
	return 0;
}
