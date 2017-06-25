#include "miLista.h"
#include <stdlib.h>
#include <stdio.h>

/*
*@ Autor: Roberth Loor
*@ Descripci�n: Metodo que inserta un objeto pasado por parametro al final de la lista. 
*  En caso de lograrlo retorna 1, caso contrario retorna 0 
*/
int Lista_InsertarFin(ListaEnlazada *lista, void *objeto){
	// En caso de que la lista no exista o el objeto sea igual a NULL
	if(lista==NULL)
		return 0;
	//Agregamos un nodo nuevo de tipo ElementoLista donde se almacenara el objeto pasado por parametro
	ElementoLista *nuevo=NULL;
	nuevo = (ElementoLista *)malloc (sizeof(ElementoLista));
	if (nuevo== NULL){
		printf("Error en la asignaci�n de memoria. Intente de neuvo\n");
		return 0;
	}
    	//si la lista esta vacia se insertar� al inicio de la Lista.
    if((lista->numeroElementos) == 0){ 
		nuevo->siguiente=&(lista->ancla);
		nuevo->anterior = &(lista->ancla);
		(lista->ancla).siguiente=nuevo;
		(lista->ancla).anterior=nuevo;
    }else{ 
	//agregamos el elemento al final de la lista
    	ElementoLista *inicio=lista->ancla.anterior;//Se guarda en un temporal el elemento final que se obtiene con el anterior de ancla
		nuevo->siguiente=&(lista->ancla);//el siguiente de nuevo apuntar� ahora a ancla
		nuevo->anterior = inicio;//En el elemento nuevo, su anterior apuntar� a la variable que anteriormente era el ultimo
		inicio->siguiente=nuevo; // el siguiente del que antes era �ltimo apunr� al elemento nuevo
		(lista->ancla).anterior=nuevo;// Finalmente el anterior de ancla apuntar� a nuevo
    }
    //Se coloca el objeto en el nodo nuevo 
    nuevo->objeto=objeto;
    lista->numeroElementos += 1;
  return 1;
}



