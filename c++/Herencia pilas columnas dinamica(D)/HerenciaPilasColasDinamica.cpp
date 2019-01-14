#include <conio.h>
#include <stdio.h>
#include <time.h>
#include <windows.h>

class datonodo
{ private:
    int kr;
  public:
    int dato;
    int nr;
    int *vt, *v;
    datonodo();
    ~datonodo();
};

datonodo::datonodo()
{ kr=nr=0; dato=-1;
}

datonodo::~datonodo()
{ }

class cola
{ public:
    datonodo nodo;
    void agregar();
    void agregar(int i);
    int eliminar();
};

void cola::agregar()
{ int k;
  nodo.nr++;
  if (nodo.nr==1)
  { nodo.v= new int[1];
    nodo.v[0]=nodo.dato;
  }
  else
  { nodo.vt = new int[nodo.nr];
    for(k=0; k<nodo.nr-1; k++)
      nodo.vt[k]=nodo.v[k];
    delete nodo.v;
    nodo.v = new int[nodo.nr];
    for(k=0; k<nodo.nr-1; k++)
      nodo.v[k]=nodo.vt[k];
    nodo.v[k]=nodo.dato;
    delete nodo.vt;
  }
}

void cola::agregar(int i)
{ nodo.dato=i;
  agregar();
}

int cola::eliminar()
{ int k;
  if (nodo.nr>0)
  { nodo.nr--;
    nodo.vt = new int[nodo.nr];
    for(k=0; k<nodo.nr; k++)
      nodo.vt[k]=nodo.v[k+1];
    delete nodo.v;
    nodo.v = new int[nodo.nr];
    for(k=0; k<nodo.nr; k++)
      nodo.v[k]=nodo.vt[k];
    delete nodo.vt;
    return 1;
  }
  else
    return -1;
}

void mostrar(cola x)
{ int j;
  if (x.nodo.nr>0)
    for (j=0; j<x.nodo.nr; j++)
      printf("%d [%d]\n",j,x.nodo.v[j]);
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
