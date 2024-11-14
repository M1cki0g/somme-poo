#include "header.h"
using namespace std;

int Somme::som(){
return a+b;
}

void Somme::aff(int c){
cout<<"somme ="<<c<<endl;
}

Somme::Somme(int a , int b){
this->a = a;
this->b = b;

}

int Somme::getval(int a){
return a;
}

int main(){
int a,b;
cin>>a;
cin>>b;
Somme n1(a,b);
int r = n1.som();
n1.aff(r);
return 0;
}
