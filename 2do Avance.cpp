#include <iostream>
#include <math.h>
#include <conio.h> 
#include <stdio.h>
#include <string.h>
#include <string>
#include <wchar.h>
using  namespace std;

struct articulos
{
    char Nom[20], Gen[20], clas[2], cons[10], descripcion[50];
    int num;
    float desicion;

};

int main()
{
    articulos can[3];
    int opcion;

    do
    {
        printf("Seleccione una opcion\n");
        printf("\n1.Alta de articulos\n");
        printf("2.Modif articulos\n");
        printf("3.Baja de articulos\n");
        printf("4.Lista de articulos\n");
        printf("5.Limpiar pantalla\n");
        printf("6.Salir \n");
        scanf_s("%d", &opcion);

        switch (opcion)
        {
        case 1: //ALTA
            for (int i = 0; i < 3; i++)
            {
                cin.ignore();
                printf("Ingrese el nombre del articulo \n"); //nombre
                gets_s(can[i].Nom);
                

                printf("Ingrese el numero del articulo \n"); //numero
                scanf_s("%d", &can[i].num);
                cin.ignore();

                printf("Ingrese el genero del articulo \n"); //genero
                gets_s(can[i].Gen);
                
                printf("Ingrese la consola al que pertenece el articulo \n"); //consola
                gets_s(can[i].cons);
                

                printf("Ingrese la clasificacion del articulo \n"); //clasificacion
                gets_s(can[i].clas);
                

                printf("Ingrese una descripcion del articulo \n"); //descripcion
                gets_s(can[i].descripcion);
                
            }
            break;
        case 2:
            break;

        case 3:
            break;

        case 4: //LISTA
            for (int i = 0; i < 3; i++)
            {
                printf("NUMERO DEL ARTICULO %d \n", can[i].num);
                printf("NOMBRE DEL ARTICULO: %s \n", can[i].Nom);
                printf("DESCRIPCION SOBRE EL ARTICULO: %s \n", can[i].descripcion);
                printf("CLASIFICACION DEL ARTICULO: %s \n", can[i].clas);
                printf("GENERO AL QUE PERTENECE EL ARTICULO: %s \n", can[i].Gen);
                printf("CONSOLA A LA QUE PERTENECE EL ARTICULO: %s \n", can[i].cons);

            }
            break;

        case 5:
            system("cls");
            break;
        case 6:
            exit(1);
            break;

        }
    } while (opcion != 6);

}