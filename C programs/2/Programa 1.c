/**
1) Hacer un programa para administrar una Lista de datos :

1. Insertar un elemento a la lista

2. Mostrar la lista

3. Buscar un elemento en la lista por nombre indicando la posici�n en la que lo encontr�

4. Actualizar los datos de un elemento lista

5. Borrar un elemento de la lista .

6. Ordenar los datos de la Lista

7. Salir

**/

/* Nombre: GermanHv
	Programa: Estructura de datos
	Comentarios: Ejemplos
	Programas 1 parcial | 2NV21 | Estructura de datos. */


//Librerias
//#include <conio.h>
//usamos getch();
#include<stdio.h>  /* incluye biblioteca donde se define E/S */
#include<stdlib.h> //usamos System
#include<string.h>
#include<conio.h> //Usamos getch()
//usamos system
//#include <math.h> incluye biblioteca donde se define operaciones matemÃ¡ticas
//Declarancion de funciones

void fInsertar(void);
void fMostrar(void);
void fBuscar(void);
void fActualizar(void);
void fBorrar(void);
void fOrdenar(void);
void fadios(void); 
	void fbus_elem(int n, int x);
	#define no_esta -1
//variables globales
int L[10]={7,0,18,3,10,5,15,4,22,11};
int n = 10;
int j,i,x,k;
int opcion=0;





int main()
{
	while (opcion != 7)
	{
		system ("cls");
		printf("\n\n GermanHv");
		printf("\n\n Menu principal");
		printf("\n\n opcion 1 = Insertar elemento en a lista");
		printf("\n\n opcion 2 = Mostrar la lista");
		printf("\n\n opcion 3 = Buscar un elemento en la lista");
		printf("\n\n opcion 4 = Actualizar los datos de un elemento en la lista");
		printf("\n\n opcion 5 = Borrar los datos de un elemento en la lista");
		printf("\n\n opcion 6 = Ordenar los datos de la lista");
		printf("\n\n opcion 7 = Salir");
		printf("\n\n Digite una opcion");
		scanf("%i", &opcion);
		fflush(stdin);
		system ("cls");
		
		
	switch (opcion)
		{
		case 1:
		{
		fInsertar();
		}

		break;
		case 2:
		{
			fMostrar();
		}
		break;
		case 3:
		{
				fBuscar();
			}
			printf("\n");
		break;
		case 4:
			{
			fActualizar();
			}
			
		break;
		case 5:
		{
		fBorrar();
		}
		break;
		case 6:
		{
		fOrdenar();
		}
		break;
		case 7:
		{
		fadios();
		}
		break;
		default:
		{
		printf("\n\n Opci%cn invalida\n", 162);
		}
	break;
		}
	system("pause");
	// getch();/* Pausa */
 	 
	  }
 	
	 return 0;
}



// **************************************Funciones

void fInsertar (void)
{
	int j = n-1;
	int k = L[i];
	printf ("Introduce un numero entero: \n");
	scanf ("%d",&x);

	while (j>=k){
		L[j+1] = L[j];
		j--;
	}
	L[k]=x;
	n++;
	
	fflush ( stdin );
	printf ("\n");
	system(" pause");
	system("cls");
}

void fMostrar (void){

	printf("Los elementos de la lista son: {");
	for (i=0;i<=9;i++){
		printf ("%d,", L[i]);
	}
	printf("}\n\n");
	
	printf ("\n");
	system(" pause");
	system("cls");
}


void fBuscar (void){

 //Research starts from the index 
 

		printf("Los elementos de la lista son: {");
		
	for (i=0;i<=9;i++){
		printf ("%d,", L[i]);
	}
	printf("}\n\n");
				
	printf("\nPara buscar elemento primero hay que ordenar la lista\n Regresa aqui despues de ordenarla en el menu opcion 6\n");
	printf("\nSi ya ordenastes la lista: Ingresa un numero a buscar: \n");
		
	printf("Ingresa el valor a buscar: ");
   scanf("%d", &x);

   i = 0;
   while (i < n && x != L[i]) {  //este busca de atras hacia adelante
      i++;
   }
 
   if (i < n) {
      printf("El elemento se encuentra en la posicion = %d", i);
   } else {
      printf("Elemento no encontrado!");
   }
	

	printf ("\n");
	system(" pause");

}
	

void fActualizar(void)
{	int i=0, nuevo=0;
	char resp[1];
	
	
		printf("Los elementos de la lista son: {");
	for (i=0;i<10;i++){
		printf ("%d,", L[i]);
	}
	printf("}\n\n");
	
	do {
		printf("Desea modificar su arreglo (S/N)?");
		resp[0]=getch();
		if(resp[0]=='S' || resp[0]== 's'){
			printf ("\nIngresa el Indice del elemento a modificar: ");
			scanf("%d", &i);
				if(i>=0 && i<=(n-1)){
				printf("En el Indice %d actualmente hay un %d\n",i,L[i]);
				printf("Ingresa el nuevo elemento: ");
				scanf("%d",&nuevo);
				L[i]= nuevo;
				printf("El vector ahora es: ");
				printf("{");
					for (i=0;i<10;i++){
					printf ("%d,", L[i]);
					}
					printf("}\n\n");
				}
				else {
					printf("El indice que ingresaste no existe\n");
				}
			
		}
		
	}while (resp[0] == 'S' || resp[0]== 's');

	printf ("\n");
	system(" pause");
	system("cls");
}
void fBorrar(void)
{	/*si la lista esta vacia*/
	/* si el elemento a borrar es el ultimo*/
	int pos;
		printf("Los elementos de la lista son: {");
	for (i=0;i<10;i++){
		printf ("%d,", L[i]);
	}
	printf("}\n\n");
	printf("\tQue elemento desea borrar?\n Escribe el n�mero:   ");
	scanf("%d",&x);
	
	if (n>0){
		for(i=0;i<=(n-1);i++){
			if(L[i]==x){
				if(i!=(n-1)){
					for (pos=i;pos<(n-1);pos++){
						L[pos]=L[pos+1];
					}
					n--;
					break;
					}
					else n--;
				}
			}
		}
		else
		printf ("lista vacia");

	
	printf("\n");
	system(" pause");
	system("cls");
}

void fOrdenar(void)
{// Por m�todo de b�rbuja
	for(i=1;i<=(n-1);i++){
		for (j= n-1;j>=i;j--){
			if (L[j]<L[j-1]){
			x=L[j-1];
			L[j-1]=L[j];
			L[j]=x;
			}
		}
	}
	printf("Los elementos de la lista se ordenaron de forma ascendente: {");
	for (i=0;i<=9;i++){
		printf ("%d,", L[i]);
	}
	printf("}\n\n");

	printf ("\n");
	system(" pause");
	system("cls");
}

void fadios (void)
{
	system ("cls");
	printf("\n\n Adios\n");
	system("pause");
	system("cls");

}

