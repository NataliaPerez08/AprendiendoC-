#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<wchar.h>
#include<locale.h>
int main()
{
      int a,b,c,exp=2,b1,b2,resexp,a1,a2,mul1,sumexp,sumexp1,sumexp2,finmas,finmenos,x1,x2;
      setlocale(LC_ALL, "");
      	printf("\n\n\t\t\t\t\t     __________");
      	printf("\nProblema de ecuación trigonométrica:\t-b±²v(b^2)-4ac'");
      	printf("\n\t\t\t\t      x=-------------------");
      	printf("\n\t\t\t\t\t\t2a");
      	printf("\n\n\nIntroduce el valor a:");
      		scanf("%d",&a);
      	printf("\n\nIntroduce el valor b:");
      		scanf("%d",&b);
      	printf("\n\nInroduce el valor c:");
      		scanf("%d",&c);
      	printf("\n\n___________________________________________________________________________________________");
     	printf("\n\n\t __________");
      	printf("\n    -b±²v(b^2)-4ac'");
      	printf("\nx=-------------------");
      	printf("\n\t  2a");
      			b1=b;
      			b2=b;
      			a1=a;
      			a2=a;
      	printf("\n\n___________________________________________________________________________________________");
      	printf("\n\n\t    ________________");
      	printf("\n    -(%d)±²v((%d)^2)-4(%d)(%d)'",b1,b2,a1,c);
      	printf("\nx=---------------------");
      	printf("\n\t    2(%d)",a2);
      			resexp=pow(b2,exp);
      			b1=b1*-1;
      			mul1=a1*c;
      			a2=a2*2;
      	printf("\n\n___________________________________________________________________________________________");
      	printf("\n\n\t  __________");
      	printf("\n    %d±²v%d-4(%d)'",b1,resexp,mul1);
      	printf("\nx=---------------------");
      	printf("\n\t    %d",a2);
      			mul1=mul1*-4;
      			      	      			if(a2==0)
      			{
      					printf("\n\n___________________________________________________________________________________________");
	  					printf("\nLa ecuación no puede resolverse");
				  }
				else
				if(a2<0&&a2>0)
				{
      	printf("\n\n___________________________________________________________________________________________");
      	printf("\n\n\t  ________");
      	printf("\n    %d±²v%d%d'",b1,resexp,mul1);
      	printf("\nx=---------------------");
      	printf("\n\t    %d",a2);
      			sumexp=mul1+resexp;
      	printf("\n\n___________________________________________________________________________________________");
      	printf("\n\n\t     ____");
      	printf("\n       %d±²v%d'",b1,sumexp);
      	printf("\nx=---------------------");
      	printf("\n\t    %d",a2);
	  				if(sumexp<0)
	  				{
	  					printf("\n\n___________________________________________________________________________________________");
	  					printf("\nLa ecuación no puede resolverse");
					}
					else
					if(sumexp>=0)
					{
								sumexp=sqrt(sumexp);
						printf("\n\n___________________________________________________________________________________________");
      					printf("\n\t  %d±%d",b1,sumexp);
      					printf("\nx=---------------------");
      					printf("\n\t    %d",a2);
      							sumexp1=sumexp;
      							sumexp2=sumexp;
      					printf("\n\n___________________________________________________________________________________________");
    					printf("\n\t  %d+%d\t\t\t\t¦\t\t  %d-%d",b1,sumexp1,b1,sumexp2);
    					printf("\nx1=---------------------\t\t¦\tx2=---------------------");
    					printf("\n\t    %d\t\t\t\t¦\t\t    %d",a2,a2);
    							finmas=b1+sumexp1;
    							finmenos=b1-sumexp2;
    					printf("\n\n___________________________________________________________________________________________");
    					printf("\n\t   %d\t\t\t\t¦\t\t   %d",finmas,finmenos);
    					printf("\nx1=---------------------\t\t¦\tx2=---------------------");
    					printf("\n\t    %d\t\t\t\t¦\t\t    %d",a2,a2);
    							x1=finmas/a2;
    							x2=finmenos/a2;
    							printf("\n\n___________________________________________________________________________________________");
    							printf("\nx1=%d\t\t¦\tx2=%d",x1,x2);			
					}}
      getch();
}
