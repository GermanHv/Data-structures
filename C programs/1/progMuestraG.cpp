#include <stdio.h>
#include <stdlib.h>
#define N 4
int K[N]={7,18,3,10};
int L[4]={3,6,9,7};
int n = 8, x;
int lista[10]= { 5,10,15,20,25,30,35,40,0,0 };
char nombre[3][15];
// Funciones o métodos

void Combinacion(){
int ind=0;
int i,j;
int resultado[8];
    for(i=0;i<4;i++){
       resultado[ind++]=K[i];
    }
    for(j=0;j<4;j++){
        resultado[ind++]=L[j];
    }
    printf("La combinacion de K y L es: \n\n");
    printf("El Vector K es: {");
    for(i=0; i<4; i++)
    {
       printf("%d,",K[i]);
    }
    printf("}\n\n");
    printf("El Vector L es: {");
    for(i=0;i<4;i++){
       printf("%d,",L[i]);
    }
    printf("}\n\n");
    printf("El resultado es: {");
    for(i=0;i<8;i++){
       printf("%d,",resultado[i]);
    }
    printf("\n\n");
    system("pause");
}

void Juntar(){
int i, j, ind = 0, resultado[8];
    system("cls");
    printf("*****  Juntar  ******\n");
    system("pause");
}

void bus_elem(int n, int x, int lista[10]) {
#define no_esta -1
	int i, j;
	int pos = 0;
    system("cls");
    printf("\n\n\nLa Lista es: ");
    printf("{");
    for(j=0; j < n ; j++){
       printf("%d,",lista[j]);
    }
    printf("}\n\n");
    printf("Elemento a Buscar X = ");
    scanf("%d",&x);
}

main(){
int opc=0, pos = 0;
int fa=2, ca=2;
int A[fa][ca];
while(opc != 4){
    //clrscr();
    system("cls");
	printf("\n\n\n 1. Combinacion  K y L\n");
	printf(" 2. Juntar K y L\n");
	printf(" 3. Buscar un elemento\n");
	printf(" 4. Salir\n");
    printf(" Elija opcion: ");
	scanf("%d",&opc);
    printf("\n");
	switch(opc){
	case 1:
		Combinacion();
		break;
	case 2:
		Juntar();
		break;
	case 3:
         bus_elem(n, x, lista);
         system("pause");
   		 break;
	case 4:
		break;
	default:
		printf("Opcion Invalida\n");
		system("pause");
	}//switch
 }//while

}//main
