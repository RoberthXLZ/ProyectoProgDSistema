#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

/*
*@Autor: Roberth Loor
*@Descripción: Método que me permite sacar el elemento pasado como parameto en la lista tambien pasada como parametro
*
*/

void Lista_Sacar(ListaEnlazada *lista, ElementoLista *elemento){
	if(lista==NULL || elemento==NULL)//Validar que los paramentros no sean nulos
		return;
	if(Lista_Conteo(lista)==1){  //En caso de que exista solo un elemento podemos ayudarnos con Inicializar
		Lista_Inicializar(lista);
	}else if(&(lista->ancla) != elemento && Lista_Conteo(lista)>1){ //en caso que existan mas de un elemento se debe cambiar los direcciones de los punteros siguiente y anterior 
		//El temp guardará la dirección al ancla
		ElementoLista *temp= &(lista->ancla);
		//Validamos que  elemento pertenezca a la lista
		while((temp->siguiente )!= &(lista->ancla)){ 
			if(temp->siguiente == elemento){
				ElementoLista *eliminar= temp->siguiente;
				temp->siguiente=eliminar->siguiente;
				(eliminar->siguiente)->anterior=temp;
				lista->numeroElementos -= 1;
				return;
			}
			temp = temp->siguiente;
		}
	}
}
