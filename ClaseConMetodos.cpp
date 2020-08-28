#include <iostream>
using namespace std;

class Saludo{	//La clase
	public:		//El especificador de acceso
	int diHola(int veces);//La declaracion del metodo o funcion
	void otroMetodo(){
		cout<< "Soy otro metodo";
	}
	int nuevo(int numero){
		cout<< "\nEl numero fue "<<numero;
	}
};

//Metodo/Funcion fuera de la clase
int Saludo::diHola(int veces){	
	for(int i= 0; i < veces; i++){
	cout<<"Hola mundo\n";
	}
	return veces;
}

int main(){
	Saludo objeto; // Se crea un objeto
	cout<< objeto.diHola(5);//Se llama el metodo
	objeto.otroMetodo();
	objeto.nuevo(2);
	return 0;
}
