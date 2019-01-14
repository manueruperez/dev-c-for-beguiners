#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>
int vec[9];
void vector()
{
     int k;
     
     srand((unsigned)time(NULL));
     for(k=0;k<10;k++)
     {
                      vec[k]=rand()%10;
                      printf("%d",vec[k]);
     }
}

void burbuja()
{
     int e,i,t;
     for(e=0;e<10;e++)
     {
                     for(i=e+1;i<10;i++)
                     {
                                       if(vec[i]<vec[e])
                                       {
                                                        t=vec[i];
                                                        vec[i]=vec[e];
                                                        vec[e]=t;
                                       }
                     }
     }
}
void imprimir()
{
     int k;
     for(k=0;k<=9;k++)
     {
                      printf("%d \n",vec[k]);
     }
}
main()
{
      vector();
      burbuja();
      printf("\n\n\n");
      imprimir();
      system("pause");
}
