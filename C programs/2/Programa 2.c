/**
2) Hacer un programa que acepte una palabra y cada letra la meta en una lista de tipo char:
Mediante una pila invertir la lista de caracteres.
Ejemplo:
Entrada: amor
Salida : roma
Entrada: lamina
Salida : animal


**/

/* Nombre: GermanHv
	Programa: Estructura de datos
	Comentarios: Ejemplos
	Programas: 2 parcial | 2NV21 | Estructura de datos. */


//Librerias
//#include <conio.h>
//usamos getch();
#include<stdio.h>  /* incluye biblioteca donde se define E/S */
#include<stdlib.h> //usamos System
#include<string.h>
#include<conio.h> 
#include <stdbool.h>//Usamos getch()
//usamos system
//#include <math.h> incluye biblioteca donde se define operaciones matemÃ¡ticas
//Declarancion de funciones

#define empty -2
#define false 0
#define true 1
#define max 100

void fPush(char item);
char fPop(void);
int fVacia();
int fValor_tope();
int fFUll();

 

//variables globales
int tope = -1;
int item;
char pila[max];

int main()
{	char L[max];
		printf("\n\n GermanHv\n");
		printf("\n\n Escribe tu palabra que deseas invertir:   ");
		scanf(" %[^\n]s \n",&L);
		int i;
	int n = strlen(L); 			
		
      
      if (n>0)
		for(i=0; i<strlen(L);i++)
			fPush(L[i]);
		
		for(i=0; i<strlen(L);i++)
		L[i]=fPop();
		 printf("Cadena  invertida: %s \n",L);
   	
		
	 return 0;
}

// **************************************Funciones

void fPush(char item){
	if (full()){
	printf("\npila llena\n");
	return;
	}
		pila[++tope]=item;
	}


char fPop(){
	if(! fVacia()){
	item = pila[tope];
		tope--;
		return item;
}
		    printf("\nPila vacia!!!\n");
		    return 0;
		}
    

int fVacia(){
	 if(tope==-1)
        return (true);
    else
        return (false);
	}

int full(){
	if (tope==max-1)
		return (true);
	else
		return (false);
}

int fValor_tope(){

    if(fVacia()){
        return (empty);
    }else{
        return (pila[tope]);}
}



