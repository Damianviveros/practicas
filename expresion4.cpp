#include<iostream>
using namespace std;
int main(){

float a,b,c,d;
double resultado = 0;
cout<<"bienvenido alumno conosca su promedio"<<endl;
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
if (resultado <= 5)
{
cout<<"usted ha reprobado";}
else{
	cout<<"felicidades has aprobado";
}

return 0;
}
