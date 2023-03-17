#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main(){
int c,e;
cout<<"introduce la tabla de exponente ";
cin>>e;
	for(int b=20;b>0;b--){
		c=pow(b,e);
		cout<<c<<endl;
	}
	
	
	system("pause");
	return 0;
}
