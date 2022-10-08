//realizar la comparacion de 2 numeros
//creado por Añapa Corozo Maroly Mayerli
#include<iostream>
using namespace std;
int main ()
{
	float x,y;
	cout<<"ingrese el valor de x: "; cin>>x;
	cout<<"ingrese el valor de y: "; cin>>y;
	if(x==y){
		cout<<"el valor de x= "<<x<<" ds igual a y= "<<y<<endl;
	} else{
		if(x<y){
			cout<<" el valor de x= "<<x<<" es menor a y= "<<y<<endl;
		} else{
			cout<<"el valor de y= "<<y<<" es menor a x= "<<x<<endl;
		}
	}
	return 0;
}
