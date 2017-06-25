#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

/*
*@Autor: Roberth Loor
*@Descripción: Metodo que obtiene el primer elemento de la lista
*/a
ElementoLista *Lista_Primero(ListaEnlazada *lista){
	if(lista==NULL ){//En caso de que no exista la lista retornamos NULL
		return NULL;
	}else
		return (lista->ancla).siguiente; //El primer elemento es el que esta despues de ancla
}
