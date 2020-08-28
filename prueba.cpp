//Impresión de primer elemento y siguientes en bucle

#include<stdio.h>
#include<conio.h>

#define MAX 1005
int main(){
	int t, n , a[MAX];
	scanf("%d", &t);
	
	while(t--){
		scanf("%d", &n);
		for(int i = 0; i < n; ++i)scanf("%d",&a[i]);
			sort(a, a+n);
			printf("%d", a[0]);
			for(int i = 1; i < n; ++1)printf("%d",a[i]);
			printf("\n");	
	}
	return 0;
}
