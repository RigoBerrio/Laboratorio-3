#include "auxiliar.h"

int recursiva(int fnodo, int cnodo, int v, int nodos)
{
    bool caminos[2];
    caminos[0]=(cnodo<v-1);
    caminos[1]=(fnodo<v-1);
    if (fnodo==v-1 && cnodo==v-1) nodos++;
    if(caminos[0]) nodos=recursiva(fnodo, cnodo+1, v, nodos);
    if(caminos[1]) nodos=recursiva(fnodo+1, cnodo, v, nodos);

    return nodos;
}

void recursiva(char *c, int nivel, int escogida)
{
    char lista[11];
    lista[10]='\0';
    lista[escogida]='-';
    r++;

}

int buscar(char *cad){
    int i=0;
    for(;cad[i]=='-'; i++);
    return i;
}
