
#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
//@Autor: Roberth Loor
//Método que me devuelve el elemento anterior de una lista , con respecto al elemento pasado como parametro.
ElementoLista *Lista_Siguiente(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)//Validar si los elementos no son Nulos
		return NULL;
	if(elemento==  Lista_Ultimo(lista)){//Vaidamos si es el ultimo elemento de la lista
    		return NULL;
	}
	return elemento->siguiente;
}
