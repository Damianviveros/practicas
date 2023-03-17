#include<iostream>
using namespace std;
int main(){

double a,b,c,resultado = 0;
cout<<"digite practicas ";
cin>>a;
cout<<"\ndigite teoricas ";
cin>>b;
cout<<"\ndigite participacion ";
cin>>c;
a= 0.30 * a;
b= 0.60 * b;
c= 0.10 * c;
resultado = a+b+c;

cout<<"su calificacion es "<<resultado<<endl;

return 0;
}
