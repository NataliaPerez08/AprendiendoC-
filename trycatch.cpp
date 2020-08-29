#include <iostream>
using namespace std;
int main(){
	try{
		int age = 25;
			if (age > 18){
				cout << "Access granted - you are old enought.";
			}else{
				throw (age);//Nos permite manejar el error
			}
		}
		catch (int numero){
			cout << "Access denied- You must be at least 18 years old.\n";
			cout << "Age is: " << numero;
		}
		return 0;
}
