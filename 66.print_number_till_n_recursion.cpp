#include<iostream>
using namespace std;

void incorder(int n){
	if(n==-1){
		return;
	}
	
	 	incorder(n-1);
	 	cout<<n<<endl;
	 
}

void decorder(int n){
	if(n==-1){
		return;
	}
	cout<<n<<endl;
	decorder(n-1);
}

int main(){
	int n;
	cout<<"enter the number till you want to print:";
	cin>>n;
	cout<<"the number in increasing order:";
	incorder(n);
	cout<<"the number in decreasing order:";
	decorder(n);
	return 0;
}
