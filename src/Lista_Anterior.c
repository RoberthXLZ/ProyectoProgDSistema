#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
//@Autor: Roberth Loor
//Metodo que me devuelve el elemento anterior de una lista , con respecto al elemento pasado como parametro.
ElementoLista *Lista_Anterior(ListaEnlazada *lista, ElementoLista *elemento){
	//Comprueba si los parametros son  NULL, en caso de serlo retorna NULL
	if(lista==NULL || elemento==NULL)
		return NULL;
		//Si el elemento pasado por parametro es igual al primer elemento de la lista retornamos nulo debido a que el aterior seria el ancla. 
	if(elemento==  Lista_Primero(lista)){
    		return NULL;
	}
	//si no es ninguno de los 2 casos anteriores retornamos el ElementoLista (el nodo ) anterior
	else{
		ElementoLista *temp= &(lista->ancla);//con ese temp lo usaremos para recorrer la lista
		while((temp->siguiente )!=&(lista->ancla)){//Recorremos la lista para ver si existe el elemento pasado par paramentro
			if(temp->siguiente == elemento){
				return elemento->anterior;
			}
			temp = temp->siguiente;//aumentamos de elemento
		}
	}
	
	return NULL; 
}

