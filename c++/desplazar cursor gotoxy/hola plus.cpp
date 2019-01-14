#include<windows.h>
#include<stdio.h>
#include<conio.h>
#include<time.h>

void gotoxy(int x, int y)
{ COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

/*main()
{
int k=0;
do
{
    system("cls");
    gotoxy(k,10);
    printf("hola");
    Sleep(50);k++;
}while(!kbhit());
}*/

main()
{
int k=0;
do
{
    gotoxy(k,10);printf("    ");
    k++;
    if(k>=76)
    k=0;
    gotoxy(k,10);printf("hola");
    Sleep(50);
}while(!kbhit());
}


// QUE SON LAS PILAS Y LAS COLAS!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

