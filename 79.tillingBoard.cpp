#include<iostream>
using namespace std;

int tillingBoard(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return tillingBoard(n-1)+tillingBoard(n-2);
}

int main(){
	int n ;
	cin>>n;
	cout<<"no. of ways:"<<tillingBoard(n);
	return 0;
}
