#include<windows.h>
#include<stdio.h>
#include<conio.h>

float octal (float h)
{
      float n,d=8,c,r,z;
      int b,vec[100],k=0;
      n=h;
      
      do
      {
          c=n/d;
          b=n/d;
          r=c-b;
          r=r*d;
          vec[k]=r;
          n=b;
          k++;
      }while(b!=0);
      z=0;
      for(k=k;k>=0;k--)
      {
          z=(z*10)+vec[k];         
      }
      return z;
}
main()
{
      
      int op,;
      float x,t;
      do
      {
             system("cls");
             printf("programa para ......\n\n");
             printf("oprima 1 para convertir desimal a binario\n");
             printf("oprima 2 para salir del programa\n");
             op=getch();
             switch (op)
             {
                    case 49:
                         printf("ingrese un numero");
                         scanf("%f",&x);
                         t=octal(x);
                         printf("\n %f en octal es %f \n",x,t);
                         system ("pause");
             }
      }while(op!=50);
}

