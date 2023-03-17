#include<iostream>
using namespace std;
int main(){

float a, b, c, d, e, f, resultado = 0;
cout<<"digite el valor a ";
cin>>a;
cout<<"\ndigite el valor b ";
cin>>b;
cout<<"\ndigite el valor c ";
cin>>c;
cout<<"\ndigite el valor d ";
cin>>d;
cout<<"\ndigite el valor e ";
cin>>e;
cout<<"\ndigite el valor f ";
cin>>f;
resultado = (a + (b / c)) / (d +(e / f));
cout.precision(12);
cout<<"\nel resultado es "<<resultado<<endl;






return 0;
}
