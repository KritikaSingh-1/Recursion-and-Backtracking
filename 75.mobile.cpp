#include<iostream>
using namespace std;
	string arr[]={"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void mobile(string str,string ans){
	if(str.length()==0){
		cout<<ans<<endl;
		return;
	}
	char ch=str[0];
	string code=arr[ch-'0'];
	string ros=str.substr(1);
	for(int i=0;i<code.length();i++){
		mobile(ros,ans+code[i]);
	}
}

int main(){

	mobile("23","");
	return 0;
}
