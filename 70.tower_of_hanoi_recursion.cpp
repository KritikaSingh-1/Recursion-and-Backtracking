#include<iostream>
using namespace std;
//tower of hanoi
void towerofhanoi(int n,char scr,char dest,char helper){
	
	if(n>=1){	
    	towerofhanoi(n-1,scr,helper,dest);
	    cout<<"Move from "<<scr<<" to "<<dest<<endl;
	    towerofhanoi(n-1,helper,dest,scr);
   }
} 
int main(){
	towerofhanoi(3,'A','C','B');
	return 0;
}
