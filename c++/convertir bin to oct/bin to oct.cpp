#include<stdio.h>
#include<windows.h>
#include<conio.h>

main()
{
      int  b,k,vec[100];
      float a,r;
      printf("digite");
      scanf("%f",&a);
      b=a;
      for(k=0;k=-1;k++)
      {
                a=a*0.1;
                b=b*0.1;
                r=a-b;
                r=r*10;
                vec[k]=r;
                printf("%d\n",vec[k]);
                Sleep(300);
                a=b;
                if(a-b==0-0)
                k=-1;
      }
      for(k=k;k=0;k--)
      {
                   printf("%d\n",vec[k]);   
      }
      system("pause");
}
