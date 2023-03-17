#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cout<<"digite un numero tres numeros ";
cin>>a>>b>>c;
cout<<"digite un cuarto similar a uno anterior ";
cin>>d;
if(d==a){
	
cout<<"el numero es igual a "<<a; 	
}
else if(d==b){
	cout<<"el numero es igual a "<<b;
}
else if(d==c){
	cout<<"el numero es igual a "<<c;
}
else {
	cout<<"su numero es diferente a los anteriores"<<endl;
	cout<<"el numero digitado es "<<d;
}
return 0;
}
