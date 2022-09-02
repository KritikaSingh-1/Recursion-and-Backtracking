#include<iostream>
using namespace std;
int sum(int n){
	if(n==0){
		return 0;
	}
	int  Sum=n+sum(n-1);
	return Sum;
}

int powerof(int n,int p){
	if(p==0){
		return 1;
	}
	int power = n*powerof(n,p-1);
	return power;
}

int factorial(int n){
	if(n==1){
		return 1;
	}
	int fact=n*factorial(n-1);
	return fact;
}

int fibonacci(int n){
	if(n==0){
		return 0 ;
	}
	if(n==1){
		return 1;
	}
	int sum ;
	sum=fibonacci(n-1)+fibonacci(n-2);
	return sum;
}

int main(){
	int n,p;
	cin>>n>>p;
	cout<<sum(n)<<endl;
	cout<<powerof(n,p)<<endl;
	cout<<factorial(n)<<endl;
	cout<<fibonacci(n)<<endl;
	return 0;
}
