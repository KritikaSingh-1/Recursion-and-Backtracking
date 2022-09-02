#include<iostream>
using namespace std;

void reverse(string str){
	if(str.length()==0){ //base case
		return;
	}
	string ros= str.substr(1);
	reverse(ros);
	cout<<str[0];
}

int main(){
	string str;
	cout<<"enter the name of the string:";
	cin>>str;
	reverse(str);
	return 0;
}
