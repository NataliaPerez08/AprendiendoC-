#include<stdio.h>
#include<conio.h>
main()
{
      int i,r[100],a[50],x,h,b[100],d[100],e[100];
      float y[100],z[100],c[100],f[100],g[100],total;
      char nombre[100][50], puesto[100];
      total=0;
      printf("Numero de empleados: ");
      scanf("%i", &x);
      for (i=1; i<=x; i++)
      {
          printf("\n Numero del empleado: ");
          scanf("%d", &a[i]);
          
          printf("\n Nombre del empleado: ");
          scanf("%s", &nombre[i]);
          
          printf("\n Puesto: ");
          scanf ("%s",&puesto[i]);
          
          printf("\n Sueldo base: ");
          scanf("%f", &y[i]);
          
          printf("\n Que prestaciones tiene?  1. Vivienda   2. Monetario  3.Ambos 4.Ninguno");
          scanf("%d",&b[i]);
          switch(b[i])
          {
             case 1:
                   printf("Tiene seguro medico? 1.Si 2.No");
                   scanf("%d",&d[i]);
                   switch (d[i])
                      {
					           case 1:
					           	printf("\n Cuantas faltas tuvo en el mes?");
					           	scanf("%d",&e[i]);
					           	f[i]=e[i]*y[i]/30;
					           	z[i]=y[i]*.33;
					           	c[i]=y[i]-z[i];
					           	g[i]=c[i]-f[i];
								   break;
								case 2:
								printf("\n Cuantas faltas tuvo en el mes?");
								scanf("%d",&e[i]);
									f[i]=e[i]*y[i]/30;
                                    z[i]=y[i]*.30;
                                    c[i]=y[i]-z[i];
                                    g[i]=c[i]-f[i];
                               break;
                               }
                               break;
             case 2:
                  printf("Tiene seguro medico? 1.Si 2.No");
                  scanf("%d", &d[i]);
                  switch (d[i])    
                      {
                                case 1:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                   	f[i]=e[i]*y[i]/30;
                                    z[i]=y[i]*.13;
                                    c[i]=y[i]-z[i];
                                    g[i]=c[i]-f[i];
								   break;
                                   case 2:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                    f[i]=e[i]*y[i]/30;
                                    z[i]=y[i]*.10;
                                    c[i]=y[i]-z[i];
                                    g[i]=c[i]-f[i];
                                     break;
                                     }
                                     break;
             case 3:
                  printf("Tienes seguro medico? 1.Si 2.No");
                  scanf("%d", &d[i]);
                  switch (d[i])    
                      {
                                case 1:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                	f[i]=e[i]*y[i]/30;
                                    z[i]=y[i]*.43;
                                    c[i]=y[i]-z[i];
                                    g[i]=c[i]-f[i];
                                     break;
                                case 2:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                    f[i]=e[i]*y[i]/30;
                                    z[i]=y[i]*.40;
                                    c[i]=y[i]-z[i];
                                    g[i]=c[i]-f[i];
                                     break;
                                     }
                                     break;
             case 4:
                  printf("Tienes seguro medico? 1.Si 2.No");
                  scanf("%d", &d[i]);
                  switch (d[i])    
                      {
                                case 1:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                     z[i]=y[i]*0.03;
                                     c[i]=y[i]-z[i];
                                     f[i]=e[i]*y[i]/30;
                                     g[i]=c[i]-f[i];
                                     break;
                                case 2:
                                	printf("\n Cuantas faltas tuvo en el mes?");
                                	scanf("%d",&e[i]);
                                	f[i]=e[i]*y[i]/30;
									g[i]=y[i]-f[i];
                                     break;
                                     }
                   break;
          }}
          for (h=1; h<=x; h++)
          {
          
          printf("\n Nombre del empleado: %s             Numero de empleado: %i            Sueldo final: $%f", nombre[h], a[h], g[h]);
          total=total+g[h];
          }
          printf("\n \n                                                 Total= $%f", total);
          
          getch();
}
          
