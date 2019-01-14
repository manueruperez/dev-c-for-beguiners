#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

class cola
{ private:
    int kr;
  public:
    int dato;
    int nr;
    int *vt, *v;
    cola();
    void agregar();
    void agregar(int i);
    int eliminar();
};

cola::cola()
{ kr=nr=0; dato=-1;
}

void cola::agregar()
{ int k;
  kr++; nr=kr;
  if (kr==1)
  { v= new int[1];
    v[0]=dato;
  }
  else
  { vt = new int[kr];
    for(k=0; k<kr-1; k++)
      vt[k]=v[k];
    delete v;
    v = new int[kr];
    for(k=0; k<kr-1; k++)
      v[k]=vt[k];
    v[k]=dato;
    delete vt;
  }
}

void cola::agregar(int i)
{ dato=i;
  agregar();
}

int cola::eliminar()
{ int k;
  if (kr>0)
  { kr--; nr=kr;
    vt = new int[kr];
    for(k=0; k<kr; k++)
      vt[k]=v[k+1];
    delete v;
    v = new int[kr];
    for(k=0; k<kr; k++)
      v[k]=vt[k];
    delete vt;
    return 1;
  }
  else
    return -1;
}

void mostrar(cola nodo)
{ int j;
  if (nodo.nr>0)
    for (j=0; j<nodo.nr; j++)
      printf("%d [%d]\n",j,nodo.v[j]);
}

main()
{ int op, r; cola nodo;
  srand((unsigned) time(NULL));
  do
  { system("cls");
    mostrar(nodo);
    printf("\n\nMenu Principal");
    printf("\n\n1. Agregar");
    printf("\n2. Eliminar");
    printf("\n3. Salir");
    printf("\n\nOpcion: ");
    op= getch();
    switch(op)
    { case 49:
        nodo.agregar(rand()%10);
        break;
      case 50:
        r=nodo.eliminar();
        if (r==-1)
        { printf("\n\nOpcion no valida...\nLa cola esta vacia!!\n\n");
          system("pause");
        }
    }
  }while(op!=51);
}
