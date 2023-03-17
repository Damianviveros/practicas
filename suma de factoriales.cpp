#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
  int n,suma=0,factorial;
  cout<<"elevacion ";cin>>n;
  for(int i;i<=n;i++){
  	suma=pow(2,i);
  	factorial+=suma;
  }
  cout<<"la suma es "<<factorial<<endl;
  system("pause");
  return 0;
}

