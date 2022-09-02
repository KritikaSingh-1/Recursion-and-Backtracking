#include<iostream>
using namespace std;

string xAtEnd(string str){
	if(str.length()==0){
		return "";
	}
	char ch=str[0];
	string ans= xAtEnd(str.substr(1));
	if(ch=='x'){
		return ans+ch;
	}
	
		return ch+ans;
	
}

int main(){
	cout<<xAtEnd("nxijfrxxxjijmffxjxni");
	return 0;
}
