#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int i,int key){
    if(i==n){
    	return -1;
	}
	
	if(arr[i]==key){
		return i;
	}
	return firstocc(arr,n,i+1,key);
}

int lastocc(int arr[],int n,int i,int key){
	if(i==n){
		return -1;
	}
	int restarray=lastocc(arr,n,i+1,key);
	if(restarray!=-1){
		return restarray;
	}
	if(arr[i]==key){
		return i;
	}
	return -1;
}

int main(){
	int n;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of the array:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int i=0;
	int key;
	cout<<"Enter the key you want to find:";
	cin>>key;
	cout<<"the first occurence at index:"<<firstocc(arr,n,i,key)<<endl;
	cout<<"the last occurence at index:"<<lastocc(arr,n,i,key)<<endl;
	return 0;
}
