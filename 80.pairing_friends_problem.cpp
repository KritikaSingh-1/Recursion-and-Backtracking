#include<iostream>
using namespace std;

int pairing(int n){
	if(n==0||n==1||n==2){
		return n;
	}

	return (pairing(n-1)+(n-1)*pairing(n-2));
}

int main(){
	int n;
	cout<<"Enter the no. of friends:";
	cin>>n;
	cout<<"number of ways friends can remain single or can be paired up:"<<pairing( n);
	return 0;
}
