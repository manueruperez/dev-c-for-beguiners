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
    ~cola();
    
};
cola::~cola()
{}
class pilla
{ public:
    cola pila;
    int eliminar();
    ~pilla();
};
pilla::~pilla()
{}
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
int pilla::eliminar()
{ int k;
  if (pila.nodo.nr>0)
  { pila.nodo.nr--;
    pila.nodo.vt = new int[pila.nodo.nr];
    for(k=0; k<pila.nodo.nr; k++)
      pila.nodo.vt[k]=pila.nodo.v[k];
    delete pila.nodo.v;
    pila.nodo.v = new int[pila.nodo.nr];
    for(k=0; k<pila.nodo.nr; k++)
      pila.nodo.v[k]=pila.nodo.vt[k];
    delete pila.nodo.vt;
    return 1;
  }
  else
    return -1;
}
void mostrar(pilla x)
{ int j;
  if (x.pila.nodo.nr>0)
    for (j=0; j<x.pila.nodo.nr; j++)
      printf("%d [%d]\n",j,x.pila.nodo.v[j]);
}
main()
{ int op, r; pilla obj;
  srand((unsigned) time(NULL));
  do
  { system("cls");
    mostrar(obj);
    printf("\n\nMenu Principal");
    printf("\n\n1. Agregar");
    printf("\n2. Eliminar como cola");
    printf("\n3. Eliminar como pila");
    printf("\n4. Salir");
    printf("\n\nOpcion: ");
    op= getch();
    switch(op)
    { case 49:
        obj.pila.agregar(rand()%10);
        break;
      case 50:
        r=obj.pila.eliminar();
        if (r==-1)
        { printf("\n\nOpcion no valida...\nLa cola esta vacia!!\n\n");
          system("pause");
        }
        case 51:
        r=obj.eliminar();
        if (r==-1)
        { printf("\n\nOpcion no valida...\nLa cola esta vacia!!\n\n");
          system("pause");
        }
    }
  }while(op!=52);
}
