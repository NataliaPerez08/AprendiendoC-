#include <iostream>
using namespace std;
class Auto{
	public:
		string marca;
		string modelo;
		int year;
};
int main(){
	//Crea objeto de auto
	Auto auto1;
	auto1.marca = "BMW";
	auto1.modelo = "X5";
	auto1.year = 1999;
	
	//Crea otro objeto de auto
	Auto auto2;
	auto2.marca = "Ford";
	auto2.modelo = "Mustang";
	auto2.year = 1996;
	
	//imprime los atributos
	
	cout << auto1.marca << " " << auto1.modelo 
	<<" "<< auto1.year<<"\n";
	
	cout << auto2.marca << " " << auto2.modelo 
	<<" "<< auto2.year<<"\n";
	
	return 0;
}
