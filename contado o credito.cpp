#include<stdlib.h>
#include<iostream>
using namespace std;
int main(){
int a,b,c,e,f,g;
do{
cout<<"\nhola quiere calcular un precio"<<"\n1 si"<<"\n2 no"<<endl;
cin>>e;
switch(e){

case 1:
cout<<"inserte la cantidad a pagar "<<endl;
cin>>a;
cout<<"inserte de que forma lo pagara "<<endl;
cout<<"\n1 contado"<<"\n2 credito"<<endl;
cin>>b;
switch(b){
case 1:
	c=a*0.15;
	cout<<"tiene un descuento de "<<c<<endl;
	cout<<"subtotal ="<<a-c<<endl;
case 2:
cout<<"no hay descuento";
cout<<"\nsubtotal ="<<a<<endl;	
}
	
return main();
	case 2:
	
	
	
	return 0;
}
}
while(e==1);
return 0;
system("pause");
}
