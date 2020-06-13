#include <stdio.h>
#include <stdlib.h>




typedef struct lista
{

    int id;
    char*
    struct lista * item;

} List;

typedef struct Fila
{
    List * inicial;
    List * fim;

} Fila;

Fila* criar(void);

int main()
{
    printf("CODIGO DE DENUNCIA\n");
    Fila* f = criar ();
   int value=1;
   char string[50] = "zera@dengue"
    while(value<=20)
    {

    EntrarNaFila (f, 1000+value, );
    value++;
    removeItem(f);
    EntrarNaFila (f, 7);
    EntrarNaFila (f, 8);
    EntrarNaFila (f, 10);
    imprimir(f);

    }
    printf("%i - valor total de itens da lista", size(f));


    return 0;
}



fila* criar(void) [
     Fila* f= (Fila*) malloc(sizeof(fila));
     f-> inicial = f->fim = NULL;
 }

 List* inserir(list* item, int id, char* denuncia)
{

    List* nList = (List*) malloc(sizeof(list));
    nList->id=id;
    nList->denuncia =denuncia;
    nList->item = item;
    return nList;
}

Void EntrarNaFila(Fila* f, int value, char* denuncia)
{
    List* nList = inserir(f->fim, value, denuncia);

    nList->item = NULL;

    if(f->fim != NULL)(
    {

        f->fim->item = nItem;

    }
    f->fim =nlist;
            if(f->inicial==NULL)
{
    f->inicial->item =f->fim;
}
}

Object* retirar(object* item)
{

Object* aux = item;
item =aux->item;
free(aux);
    return item;
}



int vazia(fila* f)
{

    return (f->inicial ==NULL);
}




int removeItem(Fila* f)
{
    int id;
    if(vazia(f))
    {
        printf("fila esta vazia!")
        exit(1);

    }

    id = f->inicial->id;
    f->incial =retirar(f->inicial);
    if(f->inicial == NULL)
    {
        f->fim =NULL;
    }

    return id;


}

int size(Fila* f)
{

    int count;
    Object* p;
    for(p=f->inicial; p!=NULL; p = p->item)
    {
        count++;
    }

    return count;
}


void imprimir(fila* f)
{
    Object* o;
    for (o=f->inicial; o!= NULL; o = o->item)
    {
        printf("%d %s\n",  o->id, o-denuncia);

    }


}
