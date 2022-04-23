/* Nombre: GermanHv
	Programa: Estructura de datos
	Comentarios: Ejemplos
	Programas 1 parcial | 2NV21 | Estructura de datos. */


//Libreris
//#include <conio.h>
//usamos getch();
#include<stdio.h>  /* incluye biblioteca donde se define E/S */
#include<stdlib.h> //usamos System
#include<string.h>
#include<conio.h> //Usamos getch()
//usamos system
//#include <math.h> incluye biblioteca donde se define operaciones matemÃ¡ticas
//Declarancion de funciones
void fJuntarKL(void);
void fDiferenciaKL(void);
void fDiferenciaLK(void);
void fCombinacionKL(void);
void fvalores(void);

void fadios(void); 
	
//variables globales
int K[4]={7,18,3,10};
int L[]= {3,6,9,7};
int M[8];
int j,e,i,h;
int opcion=0;




int main()
{
	while (opcion != 5)
	{
		system ("cls");
		printf("\n\n GermanHv");
		printf("\n\n Menu principal");
		printf("\n\n opcion 1 = Juntar K y L.");
		printf("\n\n opcion 2 = Diferencia K - L.");
		printf("\n\n opcion 3 = Diferencia L - K.");
		printf("\n\n opcion 4 = Combinacion K y L.");

		printf("\n\n opcion 5 = Salir");
		printf("\n\n Digite una opcion");
		scanf("%i", &opcion);
		fflush(stdin);
		system ("cls");

		
		
	switch (opcion)
		{
		case 1:
		{
		fJuntarKL();
		}

		break;
		case 2:
		{
			fDiferenciaKL();
		}
		break;
		case 3:
		{
				fDiferenciaLK();
			}
			printf("\n");
		break;
		case 4:
			{
			fCombinacionKL();
			}
			
		break;
		case 5:
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

void fJuntarKL (void)
{
	for(i=0;i<4;i++){
		M[j]=K[i];
		j=j+1;
	}
	printf("Los elementos de K son: {");
	for (i=0;i<4;i++){
		printf ("%d,", K[i]);
	}
	printf("}\n\n");

	for(i=0;i<4;i++){
		M[j]=L[i];
		j=j+1;
	}
	printf("Los elementos de L son: {");
	for(i=0;i<4;i++){
	printf("%d,",L[i]);
	}
	printf("}\n\n");
	
	printf("El resultado es: {");
	for(i=0;i<8;i++){
	printf("%d,",M[i]);
	}
	printf("}\n\n");

	printf ("\n");
	system(" pause");
	system("cls");
}

void fDiferenciaKL (void){

	printf("Los elementos de K son: {");
	for (i=0;i<4;i++){
		printf ("%d,", K[i]);
	}
	printf("}\n\n");
	
	printf("Los elementos de L son: {");
	for(i=0;i<4;i++){
	printf("%d,",L[i]);
	}
	printf("}\n\n");
	
	printf("La diferencia K - L  es:{ ");
	h=0;
	for (i=0;i<4;i++){
		e=0;
		for(j=0;j<4;j++){
			if(K[i] == L[j])
			e=1;
		}
		if (e==0){
			M[h]=K[i];
			h++;
		}
	}
	for (h=0;h<M[h]; h++){
		printf("%d,",M[h]);
	}
	printf("}\n");

	printf ("\n");
	system(" pause");
	system("cls");
}

void fDiferenciaLK (void)
	{
	printf("Los elementos de K son: {");
	for (i=0;i<4;i++){
		printf ("%d,", K[i]);
	}
	printf("}\n\n");
	
	printf("Los elementos de L son: {");
	for(i=0;i<4;i++){
	printf("%d,",L[i]);
	}
	printf("}\n\n");
	
	printf("La diferencia L - K  es:{ ");
	h=0;
	for (i=0;i<4;i++){
		e=0;
		for(j=0;j<4;j++){
			if(L[i] == K[j])
			e=1;
		}
		if (e==0){
			M[h]=L[i];
			h++;
		}
	}
	for (h=0;h<M[h]; h++){
		printf("%d,",M[h]);
	}
	printf("}\n");

	printf ("\n");
	system(" pause");
	system("cls");
}
	

void fCombinacionKL(void)
{
		printf("Los elementos de K son: {");
	for (i=0;i<4;i++){
		printf ("%d,", K[i]);
	}
	printf("}\n\n");
	
	printf("Los elementos de L son: {");
	for(i=0;i<4;i++){
	printf("%d,",L[i]);
	}
	printf("}\n\n");
	getch();

	h=0;
	for(i=0;i<4;i++){
		M[h]=K[i];
		h=h+2;
	}
	h=1;
	for(j=0;j<4;j++){
		M[h]=L[j];
		h=h+2;
	}
	printf("La combinacion de K y L es: {");
	for(int h=0;h<8;h++){
		printf("%d,",M[h]);
	}
	printf("}");

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

void fvalores (void){


	printf("Los elementos de K son: {");
	for (i=0;i<4;i++){
		printf ("%d,", K[i]);
	}
	printf("}\n\n");
	
	printf("Los elementos de L son: {");
	for(i=0;i<4;i++){
	printf("%d,",L[i]);
	}
	printf("}\n\n");
}
