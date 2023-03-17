#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int a=0,b=0,dato=0;
	cout<<"introduzca el numero de columnas: ";
	cin>>a;
	cout<<"introdusca el numero de filas: ";
	cin>>b;
	int areglo1[a][b];
	int matriz[a][b];
	srand(time(NULL));
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			dato=rand()%10;
			areglo1[i][j]=dato;
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			matriz[i][j]=areglo1[i][j];
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			cout<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
}