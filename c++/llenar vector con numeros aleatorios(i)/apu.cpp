
//// UN VECTOR QUE LLENE CON NUMEROS ALEATORIOS

#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>

void gotoxy(int x, int y)// funcion para llenar vectores
{ COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int v[20],k;

void primero()
{
          
	v[k]=srand((unsigned)time (NULL))
     
}

main()
{
      int w;
      do
      {
                      v= new int [k];
                      system("cls");
                      gotoxy(2,2);
                      printf("MENU\n");
                      printf("1.ingresar un numero\n");
                      printf("2.borrar datos\n");
                      printf("3.observar\n");
                      printf("4.salir");
                      w=getch();
                      system("cls");
                      gotoxy(2,2);
                      switch(w)
                      {
                              case 49:
                                   primero();
                                   break;
                              case 50:
                                   vr= new [k];
                                   segundo(v,vr);
                                   delete vr;
                                   break;
                              case 51:
                                   tercero();
                                   break;                                 
                      }
      }while(w!=52);
}
