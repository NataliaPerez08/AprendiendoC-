#include<stdio.h>
#include <iostream>
using namespace std;

#define WIDTH 5
#define HEIGHT 3
int cuadrado [HEIGHT][WIDTH];
int n,m;
int result = 0;
int main(){
	for (n=0; n<HEIGHT; n++){
		printf("\n");
		for(m=0; m< WIDTH; m++){
			cuadrado[n][m] = (n+1)*(m+1);
			printf(" %i",cuadrado[n][m]);
		}
	}
	int numero [] = {1,2,3};
	for (int i=0; i < 3; i++){
		result += numero[i];
	}
	cout << "\nLa suma es "<<result;
}
