#include<iostream>

using namespace std;

int main(){
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14,n15,n16,n17,n18, suma= 0;
	char letra;
	cout<<"digite el producto ";
	cin>> n1;
	n2 = n1 * 0.16;
	suma = n1 + n2;
	cout<<"\nel precio es " <<suma<<endl;//este es primer producto
	
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
cout<<"\ndigite el siguiente producto ";
cin>>n3;
n4 = n3 * 0.16;
n5 = n3 + n4;
cout<<"\n el precio es "<<n5<<endl;//el segundo
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
cout<<"\ndigite el siguiente producto ";
cin>> n6;
n7 = n6 * 0.16;
n8 = n7 + n6;
cout<<"nel precio es "<<n8<<endl;//el tercer producto
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
	
cout<<"\ndigite el siguiente producto ";
cin>>n9;
n10 = n9 * 0.16;
n11= n9 + n10;
cout<<"\nel precio es "<<n11<<endl;//el cuarto producto
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
	
cout<<"\ndigite el siguiente producto ";
cin>>n12;
n13 = n12 * 0.16;
n14 = n12 + n13;
cout<<"\nel precio es "<<n14<<endl;//el quinto
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
cout<<"\ndigite el siguiente producto ";
cin>>n15;
n16 = n15 * 0.16;
n17 = n16 + n15;
cout<<"\nel precio es "<<n17<<endl;//el sexto producto
	cout<<"\npresione cualquier tecla y ponga star"<<endl;
	cin>>letra;
cout<<"\ncalculando el total "<<endl;
n18 = suma + n5 + n8 + n11 + n14 + n17;
//necesite un total de 19 datos de entrada para seis productos necesito mejorer mi comprension para evitar esto

cout<<"\nel total es "<<n18<<endl;
	
	return 0;
}
