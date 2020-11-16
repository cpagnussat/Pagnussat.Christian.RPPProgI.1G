#include <stdio.h>
#include <stdlib.h>

/*
1. Crear una función llamada aplicarDescuento que reciba como parámetro el precio de un producto y devuelva el valor del producto con un
 descuento del 5%. Realizar la llamada desde el main. *

 2. Crear una función que se llame contarCaracteres que reciba una cadena de caracteres como primer parámetro y un carácter como segundo y
  devuelva la cantidad de veces que ese carácter aparece en la cadena

  3. Dada la estructura Notebook(id, procesador, marca, precio) generar una función que permita ordenar un array de dicha estructura por marca.
  Ante igualdad de marca deberá ordenarse por precio. Hardcodear datos y mostrarlos desde el main. *
*/



typedef struct{

    int id;
    char procesador;
    char marca[20];
    int precio;

}eNotebook;

int aplicarDescuento(int precioAnterior);
int contarCaracteres(char cadena[], char caracter);
int ordenarMarca(eNotebook note[], int tam);

int main()
{
    eNotebook note[3] = {{1000, 'a', "lenovo", 500},{2000, 'b', "hp", 350},{3000, 'c', "sony", 700} };
    int precio = 200;
    char cadena[20] = "holaroberto";
    char caracter = 'o';


    printf("%d\n\n", aplicarDescuento(precio)); // punto 1
    printf("La letra se repite %d veces\n\n", contarCaracteres(cadena,caracter)); // punto 2
    int ordenarMarca(note, TAM); // intento de punto 3

}


int aplicarDescuento(precioAnterior)
{
    int descuento;

    descuento = precioAnterior - 5*precioAnterior /100;

    return  descuento;

}

int contarCaracteres(char cadena[], char caracter)
{
    int i,contar=0;

    for(i=0;cadena[i];i++)
    {
    	if(cadena[i]==caracter)
    	{
          contar++;
		}
 	}

 	return contar;
}


int ordenarMarca(eNotebook note[], int tam)
{
    int error = 1;
	eNotebook noteAux;

	if (note != NULL && tam > 0)
    {
        if(strcmp(str[i],str[j])>0){

            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);

        error = 0 ;

        //no llegue con el tiempo pero se que iba por aca
    }

	return error;
}
