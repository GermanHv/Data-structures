
#include<stdio.h>  /* incluye biblioteca donde se define E/S */
#include<stdlib.h> //usamos System
#include<string.h>
#include<conio.h>
char verifica[20];
char respuesta[20];

main(){

do
{
        Console.Clear();
        int filas1 = 0, columnas1 = 0;
        int filas2 = 0, columnas2 = 0;
        int filas3 = 0, columnas3 = 0;
        int n1 = 0;
        int m1 = 0;
        int n2 = 0;
        int m2 = 0;
        int i = 0, j = 0, c;
    do {     
        verifica = "";
        Console.WriteLine("\n");
        Console.WriteLine(" Multiplicacion de matrices \n");
        Console.WriteLine(" Por favor, ten en cuenta que para realizar la multiplicacion de matrices es necesario \n que el numero de columnas de la matriz A sea igual al numero de filas de la matriz B \n");
        Console.WriteLine(" Introduce el orden de la matriz A \n");
        try
        {
            Console.Write(" No. Filas = ");
            n1 = Convert.ToInt32(Console.ReadLine());
            Console.Write(" No. Columnas = ");
            m1 = Convert.ToInt32(Console.ReadLine());
            Console.WriteLine("\n");
            Console.WriteLine(" Introduce el orden de la matriz B \n");
            Console.Write(" No. Filas = ");
            n2 = Convert.ToInt32(Console.ReadLine());
            Console.Write(" No. Columnas = ");
            m2 = Convert.ToInt32(Console.ReadLine());
            if (m1 != n2) //Controla la regla que sirve para poder multiplicar matrices
            {
                verifica = "a";
                Console.WriteLine(" \n ERROR: Las columnas de la matriz A NO son iguales al numero de filas de la matriz B \n");
                Console.Write(" Presione cualquier tecla para reiniciar...");
                Console.ReadKey();
                Console.Clear();
            }
        } catch (FormatException)//Controla que el usuario no ingrese un valor que no sea numerico
        {
            verifica = "a";
            Console.WriteLine(" \n ERROR: Por favor ingresa valores numericos \n");
            Console.Write(" Presione cualquier tecla para reiniciar...");
            Console.ReadKey();
            Console.Clear();
        }
    } while (verifica == "a");
    int[,] A;
    int[,] B;
    int[,] R;
    A = new int[n1, m1];
    B = new int[n2, m2];
    do {
        verifica = "";
        try
        {
            Console.WriteLine("\n");
            Console.WriteLine(" Introduce los datos de la matriz A \n");
            for (filas1 = 0; filas1 < n1; filas1++)//codigo encargado de saignar los valores ingresados por el usuario a la matriz A
            {
                for (columnas1 = 0; columnas1 < m1; columnas1++)
                {
                    Console.Write(" A[" + filas1 + "," + columnas1 + "]: ");
                    A[filas1, columnas1] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.WriteLine("\n");
            Console.WriteLine(" Introduce los datos de la matriz B \n");
            for (filas2 = 0; filas2 < n2; filas2++)//codigo encargado de saignar los valores ingresados por el usuario a la matriz B
            {
                for (columnas2 = 0; columnas2 < m2; columnas2++)
                {
                    Console.Write(" B[" + filas2 + "," + columnas2 + "]: ");
                    B[filas2, columnas2] = Convert.ToInt32(Console.ReadLine());
                }
            }
            Console.WriteLine("\n");
            Console.WriteLine(" El resultado es: \n");
            Console.WriteLine(" Matriz A: \n");
            for (filas1 = 0; filas1 < n1; filas1++) //Impresion de la matriz A
            {
                for (columnas1 = 0; columnas1 < m1; columnas1++)
                {
                    Console.Write(" " + A[filas1, columnas1] + " ");

                }
                Console.WriteLine("");
            }
            Console.WriteLine("\n");
            Console.WriteLine(" Matriz B: \n");
            for (filas2 = 0; filas2 < n2; filas2++)//Impresion de la matriz B 
            {
                for (columnas2 = 0; columnas2 < m2; columnas2++)
                {
                    Console.Write(" " + B[filas2, columnas2] + " ");
                }
                Console.WriteLine("");
            }
            Console.WriteLine("\n");
            Console.WriteLine(" Matriz resultante R:");
            Console.WriteLine("\n");
        }catch (Exception)//controla que el usuario no ingrese valores no numericos
        {
            verifica = "a";
            Console.WriteLine(" \n ERROR: Por favor ingresa valores numericos \n");
            Console.Write(" Presione cualquier tecla para reiniciar...");
            Console.ReadKey();
            Console.Clear();
        }
    } while (verifica == "a");
    /* Otra forma de realizar la multiplicacion de las matrices A y B
    R = new int[n1, m2];
    for (i=0; i <m2; i++)
    {
        for(j=0;j<n1;j++)
        {
            int sum = 0;
            for(c=0; c<m1; c++)
            {
                sum += A[j, c]*B[c, i];
            }
            R[i, j] = sum;
        }
    }
    */
    R = new int[n1, m2];//Asigando las filas y columnas del vector resultante
    for (i = 0; i < n1; i++) // codigo que realiza la multiplicacion entre la matriz A y B
    {
        for (j = 0; j < m2; j++)
        {
            for (c = 0; c < m1; c++)
            {
                R[i, j] += A[i, c] * B[c, j];//El resultado de la multiplicacion se esta asignando a la matriz resultante R
            }
        }
    }
    for (filas3 = 0; filas3 < n1; filas3++)//Codigo que permite la impresion de la matriz resultante
    {
        for (columnas3 = 0; columnas3 < m2; columnas3++)
        {
            Console.Write(" " + R[filas3, columnas3] + " ");
        }
        Console.WriteLine("");
    }
    Console.WriteLine("\n");
    try
    {
        Console.WriteLine("    ¿Deseas volver a usar el programa?   SI/NO    ");//codigo encargado de repetir el programa si asi lo desea el usuario
        respuesta = Convert.ToString(Console.ReadLine());
        Console.Clear();
    }
    catch (Exception ex)
    {
        Console.WriteLine(ex.ToString());
    }
} while (respuesta != "NO");
Console.WriteLine("\n");
Console.WriteLi
}
