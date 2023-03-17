#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main(){
  int n,suma=0,factorial=1;
  cout<<"numero a registrar ";cin>>n;
  for(int i=1;i<=n;i++){
  	factorial*=i;
  	suma+=factorial;
  }
  cout<<"la suma es "<<suma<<endl;
  system("pause");
  return 0;
}

