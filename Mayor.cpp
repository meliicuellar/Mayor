/*Mayor
Programa que informa cual de los números ingresados es el mayor
Melina Cuellar, Ignacio Muñoz, Ramiro Balsa, Agustín Sebastián, Yamil Lopez
20170411
*/

#include<iostream>

using namespace std;

int main(){
	int a,b;
	
	cout<<"Digite dos numeros: ";
	cin>>a>>b;
	
	if(a==b){
		cout<<"Ambos numeros son iguales";
	}
	else if(a>b){
		cout<<"El mayor es: "<<a;
	}
	else{
		cout<<"El mayor es: "<<b;
	}
	
}
