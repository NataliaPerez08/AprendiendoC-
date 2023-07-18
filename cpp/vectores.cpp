#include<stdio.h>
#include<conio.h>
#include <bits/stdc++.h>
#include <string> 
#include <new>

using namespace std; 
main(){
	int tamano;
	string name;
	printf("\n¿Cual es tamanno de tu array?");
	scanf("%i",&tamano);
	
	int vector[tamano]={};
	
	for(int i=0; i <tamano; i++){
		vector[i]= 2;
	}
	
	for(int j=0; j <tamano; j++){
		printf(" %i",vector[j]);
	}
	
	printf("\nRegistro de 5 nombres");
	string nom[5]={}; 

	for(int k=0; k< 5; k++){
		printf("\nCual es tu nombre? ");
		nom[k] = name;
		name = scanf("%s",name.c_str()); //Le convierte a string
	}
	
	for(int l=0; l < 5; l++){
		printf(" %s", nom[l].c_str());
	}
}
