#include<iostream>
using namespace std;

int knapsack(int w,int arr[],int val[],int n){
	if(w==0||n==0){
		return 0;
	}
	int r;
	if(arr[n-1]>w){
		return r=knapsack(w,arr,val,n-1);
	}
    int s=	knapsack(w-arr[n-1],arr,val,n-1)+val[n-1];
	 r=knapsack(w,arr,val,n-1);
	return max(s,r);
}

int main(){
	int w;
	cout<<"enter thr capacity of knapsack:";
	cin>>w;
	int n;
	cout<<"Enter the number of item present in a house:";
	cin>>n;
	int arr[n];
	cout<<"Enter the weight of item present in a house:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int v[n];
	cout<<"enter the value of item present in the house:";
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
    cout<<	knapsack(w,arr,v,n);
	return 0;
}
