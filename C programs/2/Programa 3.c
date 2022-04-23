/*
3) Hacer un programa para convertir una expresion de notacion infija a posfija y hacer la evaluacion.
Ejemplo:
Entrada: X = 2 + 8 - (3 * 2 + 4 )
Salida X = 2 8 + 3 2* 4 + -
X = 0

¡¡¡¡¡¡Tiene Fallos no funciona!!!!!!!!

/* Nombre: German
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
int pri_p( char x);
int pri_item( char x);
void inf_a_suf();
void fPoncar(char item); 

//variables globales
int tope=-1;
int item;
char pila[max];
char x;


int main()
{	
		char L[max];int i; 
		printf("\n\n GermanHv\n");
		printf("\n\n Escribe tu operacion en infija que quieres pasar a sufija:   ");
		scanf(" %s \n",&L);
			

	while ((L[i]= getchar()) != '\n'){
		switch(L[i]){
			case'^':
			case'*':
			case'/':
			case'+':
			case'-':
			case'(':
				while (!fVacia() && (pri_p(fValor_tope())>= pri_item(L[i]))){
					fPoncar(fValor_tope());
					fPop();
				}
				fPush(L[i]);
				break;
			case ')':
				while ((L[i]=fValor_tope())!= '('){
					fPoncar(L[i]);
					fPop();
				}
				fPop();
				break;
			default :
				fPoncar(L[i]);
				break;
		}
	}
	while(!fVacia()){
		fPoncar(fValor_tope());
		fPop();
	}
		printf ("\n\n La expresion sufija es:  ");
		printf ("%s\n",&L); 	
		
		system("PAUSE");
	 return 0;

// **************************************Funciones
void fPoncar (char item){
	printf("%s", &item);
}

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

int pri_p( char x ) {
	if ( x = '^') return (3);
	if ( (x = '+')|| (x='-')) return (1);
	if ( (x = '*') || (x='/')) return (2);
	if ( x = '(') return (0);
}
int pri_item( char x ) {
	if ( x = '^') return (4);
	if ( (x = '+')|| (x ='-' )) return (1);
	if ( (x = '*')|| (x = '/' )) return (2);
	if ( x = '(') return (4);
}
					
				


