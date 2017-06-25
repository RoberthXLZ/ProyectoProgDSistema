#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*
*@author Roberth Loor
*@Descripcion: *Este metodo permite insertar un elemento de la estructura lista
 */ 
int Lista_InsertarAntes(ListaEnlazada *lista, void *objeto, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL) //valida que los parametros sean diferentes de nulo
		return 0;
	ElementoLista *nuevo=NULL;
	nuevo = malloc (sizeof(ElementoLista));//Se le asigna un espacio en memoria
	if (nuevo == NULL){ 
    	return 0;
    }else{
    	ElementoLista *refancla= &(lista->ancla);
    	while((refancla->siguiente )!= &(lista->ancla)){ //Se verifica si el elemento pasado como parametro pertenezca a la lista
			if(refancla->siguiente == elemento){ 
				nuevo->siguiente=elemento;
		    	nuevo->anterior=elemento->anterior;
		    	elemento->anterior=nuevo;
		    	(nuevo->anterior)->siguiente=nuevo;
		    	nuevo->objeto=objeto;
    			lista->numeroElementos += 1;
			return 1;
			}
			refancla = refancla->siguiente;
		}
    }
	
	return 0; // El elemento no pertenece a la lista
}
