#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*
* 
* @author Roberth Loor
* @Descripción: Este metodo permite insertar un elemento a la estructura lista despues de el elemento pasado como parametro
*/ 
int Lista_InsertarDespues(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL) //validar si los parametros son nulos
		return 0;
	ElementoLista *nuevo;
	if ((nuevo = malloc (sizeof(ElementoLista))) == NULL){ //solita una direccion valida de memoria
    	return 0;
    }else{
    	ElementoLista *recorrer= &(lista->ancla);
    	while((recorrer->siguiente )!= &(lista->ancla)){
			if(recorrer->siguiente == elemento){
				nuevo->siguiente=elemento->siguiente;
		    	nuevo->anterior=elemento;
		    	elemento->siguiente=nuevo;
		    	(nuevo->siguiente)->anterior=nuevo;	
		    	nuevo->objeto=objeto;
	    		lista->numeroElementos += 1;
			return 1;
			}
			recorrer = recorrer->siguiente;
		}
    }
	return 0;
}
