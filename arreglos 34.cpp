#include<iostream>
using namespace std;
int main(){
	int l1[]={3,4,5,6,1};
	int l2[5];
	for(int i=0;i<5;i++){
		cout<<l1[i]<<endl;
	}
	for(int i=0;i<5;i++){
		l2[i]=l1[i]*2;
	}
	for(int i=0;i<5;i++){
	
	cout<<l1[i]<<"="<<l2[i]<<endl;
	
}
	
	return 0;
}