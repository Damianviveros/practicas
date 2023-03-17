#include<iostream>
using namespace std;
int main(){

float a, b, c, d, resultado = 0;
cout<<"digite el valor a ";
cin>>a;
cout<<"\ndigite el valor b ";
cin>>b;
cout<<"\ndigite el valor c ";
cin>>c;
cout<<"\ndigite el valor d ";
cin>>d;
resultado = (a)+(b / (c - d));
cout.precision(12);
cout<<"\nel resultado es "<<resultado<<endl;






return 0;
}
