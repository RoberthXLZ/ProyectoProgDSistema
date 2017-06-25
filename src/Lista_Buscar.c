#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

/*
*@Autor: Roberth Loor
*@Descripción: Me Permite buscar un elemto en la lista
*/

ElementoLista *Lista_Buscar(ListaEnlazada *lista, void *objeto){
	if(lista==NULL) 
		return NULL;
	ElementoLista *recorrer = NULL;//

	for (recorrer = Lista_Primero(lista); recorrer != NULL; recorrer = Lista_Siguiente(lista, recorrer)) { //recorremos todo la lista en busca del elemento lista y su respectivo objeto
		long valorlista =(long)recorrer->objeto;//Obtenemos el valor y lo alamcenamos en una variable
		long valor=(long )objeto;//Guardamos el parametro
		if(valorlista== valor)  //En caso de que sea igual retornamos el nodo de la lista donde esta el objeto
			return recorrer;
	} 
	// En caso de que no exista el elemento retornamos NULL
	return NULL; 
	
}
