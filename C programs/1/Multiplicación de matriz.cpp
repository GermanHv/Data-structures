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
int a[2][3],b[3][2],c[3][3],x,y;



main (){
	printf("\t\nGermanHv\n");
	printf ("\tMatriz A [2x3]");
	for(x=1;x<=2;x++)
		for	(y=1;y<=3;y++){
			printf("\n Ingresa los valores de [%d][%d] :", x,y);
			scanf("%d",&a[x][y]);
		}
	system("cls");
		printf ("\tMatriz B [3x2]");
	for(x=1;x<4;x++)
		for	(y=1;y<3;y++){
			printf("\n Ingresa los valores de [%d][%d] : ",x,y);
			scanf("%d",&b[x][y]);
		}
		system("cls");
	//multiplicaci�n	
	for(x=1;x<3;x++)
		for	(y=1;y<3;y++){
			c[x][y]=(a[x][1]*b[1][y])+(a[x][2]*b[2][y])+(a[x][3]*b[3][y]); //Las matrices deben de tener el mismo n�mero de columnas y filas.
	}
	
		for(x=1;x<3;x++){
			for	(y=1;y<3;y++){
			printf("\t\nMatriz C[3x2]");
			printf(" %d",c[x][y]);

		}printf("\n");	
	
	}	system(" pause");
		system("cls");
	printf("\t\nHorta Venegas German 2NV21\n");
	printf("\t\nMatriz A[2x3]\n");
	for (x=1;x<=2;x++){
		for (y=1;y<=3;y++){
			printf("\t%d ",a[x][y]);
		}
		printf("\n");
	}
	printf("\t\t\nMatriz B[3x2]\n");
	for (x=1;x<=3;x++){
		for (y=1;y<=2;y++){
			printf("\t%d ",b[x][y]);
		}
		printf("\n");
	}
		printf("\t\t\nMatriz C [2x2]\n");
	for (x=1;x<=2;x++){
		for (y=1;y<=2;y++){
			printf("\t%d ",c[x][y]);
		}
		printf("\n");
	}
	system("PAUSE");
}

