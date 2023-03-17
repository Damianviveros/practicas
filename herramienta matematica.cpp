
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main(){
float par_impar;
int opc,numero,resultado;
opc= 0;
while(opc < 5){

cout<<"\n\tbienvenido a su herramienta de calculo";
cout<<"\n1.el cuadradado de un numero "<<endl;
cout<<"\n2.el numero es par o impar"<<endl;
cout<<"\n3. el cuadrado de un numero es par o no"<<endl;
cout<<"\n4. la raiz cuadrada de un numero "<<endl;
cout<<"\n5.salir"<<endl;
cout<<"\ndigite la opcion deseada ";
cin>>opc;

switch(opc){
	case 1:
		cout<<"\ndigite el numero ";
		cin>>numero;
		resultado = pow(numero,2);
		cout<<"\nel resultado es "<<resultado<<endl;
		break;
	case 2:
	cout<<"\ndigite el numero ";
	cin>>numero;
	resultado = numero%2;
	if(resultado==0){
		cout<<"el numero es par"<<endl;
	}
	else{
		cout<<"el numero es impar"<<endl;
	}
	break;
	case 3:
	cout<<"\ndigite el numero ";
	cin>>numero;
	resultado = pow(numero,2);
	par_impar=resultado%2;
	if(par_impar==0){
		cout<<"el resultado es  "<<resultado<<" y es par"<<endl;
	}
	else{
		cout<<"el resultado es "<<resultado<<" y es impar"<<endl;
	}
	break;
	case 4:
	cout<<"\ndigite el numero ";
	cin>>numero;
	resultado = sqrt(numero);
	cout<<"\n el resultado es "<<resultado<<endl;
	break;
	case 5:break;
	
}
}
getch();
return 0;
}
