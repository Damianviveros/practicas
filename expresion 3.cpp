#include<iostream>
using namespace std;
int main(){

float a,b,c,d;
double resultado = 0;
cout<<"\ndigite la primera nota ";
 cin>>a;
cout<<"\ndigite la segunda nota "; 
cin>>b;
cout<<"\ndigite la tercera nota ";
cin>>c;
cout<<"\ndigite la cuarta nota ";
cin>>d;
resultado = (a + b + c + d) / 4;


cout<<"\nla nota media es "<<resultado<<endl;


return 0;
}
