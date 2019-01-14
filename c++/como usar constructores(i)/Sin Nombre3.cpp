#include <iostream.h>
#include <conio.h>
#include <time.h>
//#include <box.h>

class listas
{ int l;
      public:
  int c[10];
  int posfin, posprin;
  listas(void);
  ~listas(void);
  void agregar(int i);
  void eliminar();
};

listas::listas(void) //Constructor
{ l = 10;
  posprin=posfin=0;
}

listas::~listas(void) //Constructor
{ }

void listas::agregar(int i)
{ if (posfin>=l)
  { printf("\n\nLista llena\n");
    system("pause");
  }
  else
  { c[posfin]=i;
    posfin++;
  }
}

void listas::eliminar()
{
    if (posfin==posprin)
  {	printf("\n\nLista vacia\n");
    system("pause");
  }
  else
  {
      int k;
      for(k=0;k<posfin;k++)
      {
           c[k]=c[k+1];
      }
      posfin--;
      posprin=0;
  }
    ;
}

main()
{ int i, k, op;
  listas nodo;
  srand((unsigned)time(NULL));

  do
  { system("cls");
    printf("PROGRAMA SIMULADOR DE LISTAS SIMPLES PARA 10 NODOS\n\n");
    if (nodo.posprin!=nodo.posfin)
    { for(k=nodo.posprin; k<nodo.posfin; k++)
        printf("%d  ", nodo.c[k]);
    }
    printf("\n\n1. Agraga un nodo");
    printf("\n2. Eliminar un nodo");
    printf("\n3. Salir");
    printf("\n\nOpcion: ");
    op=getch();
    switch(op)
    { case 49:
        i=rand()%10;
        nodo.agregar(i);
        break;
      case 50:
        nodo.eliminar();
    }
  }while (op!=51);
}
