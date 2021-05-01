#include "auxiliar.h"
#include <math.h>

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

bool amigable(int n)
{
    int sum1=0, sum2=0;
    for(int i=1; i<=(n/2); i++) if(n%i==0) sum1+=i;
    for(int i=1; i<=(sum1/2); i++) if(sum1%i==0) sum2+=i;
    return (sum2==n && n!=sum1);
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

int **matriz(int *m, int elementos)
{
    int n= sqrt(elementos);
    int **mat= new int * [n];

    for(int i=; i<n; i++) *(mat+i)= new int [n];

    for(int f=0; f<n; f++){
        for(int c=0; c<n; c++) mat[f][c]=m[c+f*n];
    }

    return mat;
}

long long int factorial(int n)
{
    long long int fact=1;
    for(;n>1; n--) fact*=n;
    return fact;
}

char *permutaciones(char *p, int n)
{
    char *m;
    if(n>=1 && n<=factorial(10)){
       m=permutaciones(p,n-1);
    }
    else
        cout << "El numero de permutacion no es valido"<<endl;
}
