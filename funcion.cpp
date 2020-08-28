/* Funciones*/
#include <iostream>
using namespace std;


int checking (int i, int j); // declara funcion 

int main (void){ //programa principal
	int i;
	cout<<"Escribe un numero"<<endl; cin>>i;
	int j;
	cout<<"Escribe otro numero"<<endl; cin>>j;
	
		if(!checking(i,j))  //Llamado a la funcion
			//Si la funcion retorna 0
			cout<<i<<" es mayor que "<<j<<endl;
		else //Si la funci�n retorna 1
			cout<<i<<" es menor que "<<j<<endl;
			return 0;
	}
	int checking (int i, int j){
	if (i<j) return 1;
	return 0;
	}
	
