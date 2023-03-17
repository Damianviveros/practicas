#include<iostream>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
using namespace std;
int main(){
	int b[100],n;
	int a;
	cout<<"introdusca el nuemro de conjunto"<<endl;
	cin>>a;
	for(int i=0;i < a;i++){
		cout<<"digite un numero:";
		cin>>b[i];
		
	}
	
	for(int i=0;i<a;i++){
		cout<<i<<" -> "<<b[i];
	}
	
	
	
	
	return 0;
	getch();
}
