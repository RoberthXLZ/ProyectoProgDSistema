#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*
*@Autor: Roberth Loor
*@Descripción: Este metodo nos ayuda a sacar todos los elemento de una lista recibida como parametro
*/

  void Lista_SacarTodos(ListaEnlazada *lista){
	if(lista!=NULL){
		lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
}
}
