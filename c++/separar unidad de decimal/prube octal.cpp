#include<stdio.h>
#include<windows.h>
#include<time.h>

main()

{
     int d;
     float a,b,c,r;
     
     
     printf("numero");
     scanf("%f",&a);
     printf("dividido por:");
     scanf("%f",&b);
     c=a/b;
     printf("es esto? creo %.2f,",c);
     d=a/b;
     printf("creo que es %d",d);
     r=c-d;
     r=r*8;
     printf("sss %.3f",r);
     system("pause");
     
     
}
