
#include<iostream>
#include<math.h>
using namespace std;
int main(){
int numero,opc,resultado,par_impar;
cout<<"\tBienvenido a su herramienta matematica "<<endl;
cout<<"1. el cubo de un numero "<<endl;
cout<<"2. el numero es par o impar "<<endl;
cout<<"3. el cubo de un numero es par o impar"<<endl;
cout<<"4. salir"<<endl;
cout<<"escoga la opcion "<<endl;
cin>>opc;
switch(opc){
	case 1:
		cout<<"digite el numero ";cin>>numero;
		resultado = pow(numero,2);
		cout<<"el resultado es "<<resultado;
			break;
		
	case 2:
		cout<<"digite el numero ";cin>>numero;
		resultado = numero%2;
		if(resultado == 0){ cout<<"el numero es par";
		}
		else{ cout<<" el numero es impar";
		}
		break;
	case 3: cout<<"digite el numero ";
	cin>>numero;
	resultado = pow(numero,2);
	par_impar= resultado%2;
	if(par_impar == 0){
		cout<<"el resultado es "<<resultado<<" y es par";
	}
	else{ cout<<"el resultado es "<<resultado<<" y es impar";
	}
	break;
	case 4: break;
}
	



return 0;
}
