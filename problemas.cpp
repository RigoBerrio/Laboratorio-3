#ifndef PROBLEMAS_H
#define PROBLEMAS_H

#include <iostream>
#include "problemas.h"
#include "auxiliar.h"
using namespace std;

void problema2();
bool problema3(char *c1, char*c2);
long long int problema4(char *c){
    long long int num=0;
    for(int itera=0; c[itera]!='0'; itera++){
        num=c[itera];
        num-=40;
        cout<<num;

    }
    cout<<endl;
    return num;
}
void problema5(int num, char *c);
char * problema6(char *c);
void problema7(char *c)
{
    cout<<"Original: "<<c<<endl;
    int cont1=0, cont2=0, cont3=0;
    char caracter;
    for (int i=0; *(c+i)!='\0'; i++){
        cont1++;
    }

    char *aux= new char [cont1];
    for (int j=0; *(c+j)!='\0'; j++){
        caracter=*(c+j);

        for (int k=0; *(aux+k)!='\0'; k++){
            if (caracter== *(aux+k))cont2++;
        }

        if (cont2==0){
            aux[cont3]=caracter;
            aux[cont3+1]='\0';
            cont3++;
        }
        cout<<"sin repetidos: "<<aux<<endl;
        delete[]aux;
    }

void problema8(char *c1, char *c2);
long long int problema9(char *c, long long int n);
long long int problema10(char *c)
{
    int total=0, valor=0, valor_ant;

    for(int i=0; c[i]!='\0'; i++){
        valor_ant=valor;
        switch (c[i]) {
        case 'M': valor=1000; break;
        case 'D': valor=500; break;
        case 'C': valor=100; break;
        case 'L': valor=50; break;
        case 'X': valor=10; break;
        case 'V': valor=5; break;
        case 'I': valor=1; break;
        default: valor= -1000000; break;
        }
        if(i==0) total=valor;
        else if(valor_ant>valor) total+=valor;
        else total-=valor;
    }
    return total;
}
void problema11(char c, char *c2)
{
    static char cine[16][42];
    static bool f=false;
    if(f){
        for(int f=0;f<16;f++){
            for(int c=0;c<42;c++){
                if(f==0){
                    if(c%2==1) cine[f][c]= ' ';
                    else cine[f][c]=char(48+(c/2));
                   }
                else{
                    if(c==0)cine[f][c]= char(f+64);
                    else if(c%2==0) cine[f][c]='-';
                    else cine[f][c]= ' ';
                }
                if(c==41) cine[f][c]= '\0';
            }
        }
        f=true;
    }
    fila= int(c2[1])-64;
    columna= 2*(int(c2[1])-48);
    if (c=='I') cine[fila][columna]='+';
    else if(c=='C') cine[fila][columna]='-';

    for(int i=0; i<16; i++) cout<< cine[i] << endl << endl;
}
bool problema12(int *mat, int elementos)
{
    bool cuadrado=true, logic[10]={0,0,0,0,0,0,0,0,0,0}, l;
    int **m, e, *fil, *col, *diag;
    m= matriz(mat, elementos);
    e= sqrt(elementos);
    fil= new int [e];
    col= new int [e];
    diag= new int [e-1];
    for(int i=0; i<e; i++){
        fil[i];
        col[i];
        if(i<e-1) diag[i]=0;
    }

    for(int f=0; f<sqrt(elementos); f++){
        for(itn c=0; c<e; c++){
            if(logic[m[f][c]]) cuadrado=false;
            else logic[m[f][c]]=1;
            fil[f]=+m[f][c];
            col[c]+=m[f][c];
            if(f==c) diag[0]+=m[f][c];
            if(f==(e-1)-c) diag[1]+=m[f][c];
        }
    }
    for(int i=0; i<e; i++){
        if(fil[i]==fil[i-1] ||  col[i]==col[i-1]) cuadrado=false;

    }
    if(diag[0]!=diag[1] || fil[0]!=col[0] || col[0]!=diag[0] || fil[0]!=diag[0]) cuadrado=false;
    delete fil;
    delete col;
    delete diag;
    delete []m;
    return cuadrado;

}
int problema13(int *mat)
{
    int estr=0, matriz[6][8];
    float logica;
    for(int f=0, i=0; f<6; f++) for(int c=0; c<8; c++, i++) matriz[f][c]=*(mat+i);
    for(int f=1; f<5; f++){
        for(int c=1; c<7; c++){
            logica=(matriz[f][c]+matriz[f][c-1]+matriz[f][c+1]+matriz[f-1][c]+matriz[f+1][c])/float(5);
            if(logica>6) estr++;
        }
    }
    return estr;
}
void problema14();
void problema15(int *dato1, int *dato2, int *cruce)
{
int cruce[4];
if(dato1[0]>=dato2[0]){
    cruce[0]=dato1[0];
    cruce[2]=dato2[0]+dato2[2]-cruce[0];//ancho
}
else{
    cruce[0]=dato2[0];
    cruce[2]=dato1[0]+dato1[2]-cruce[0];//ancho
}
//alto
if(dato1[1]>=dato2[1]){
    cruce[1]=dato1[1];
    cruce[3]=dato2[1]+dato2[3]-cruce[1];//alto
}
else {
    cruce[1]=dato2[1];
    cruce[3]=dato1[1]+dato1[3]-cruce[1];//alto
}
for(int i=0;i<4;i++){
    cout<<cruce[i]<<" ";
}
}}
int problema16(int n)
{
    int caminos;
    caminos=recursiva(0,0,n+1,0);
    return caminos;
}
int problema17(int num)
{
    int suma=0;
    for(;num>1;num--) if(amigable(num)) suma+=num;
    return suma;
}

void problema18(char *p, int n)
{
    if(n>=1 && n<=factorial(10)){

 }
   else cout<<"El número de permutación no es valido"<<endl;
}
#endif // PROBLEMAS_H
