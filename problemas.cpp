//#ifndef PROBLEMAS_H
//#define PROBLEMAS_H

#include <iostream>
//#include "problemas.h"
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
/*void problema5(int num, char *c);
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
long long int problema10(char *c);
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
bool problema12(int *mat, int elementos);
int problema13(int *mat);
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
int problema17(int num);
void problema18(char *p, int n);



#endif // PROBLEMAS_H*/
