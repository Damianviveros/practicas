
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int a, b, d, e=18;
cout<<"digite a�o de nacimiento ";
cin>>a;
cout<<"\ndigite a�o actual ";
cin>>b;
d = b - a;
if(d >= e){
cout<<"\ncredencial autorizada ";

}
else{
	cout<<"credencial no autorizada ";
	cout<<"\nsu edad es "<<d, cout<<"a�os";
}




getch();



return 0;
}
