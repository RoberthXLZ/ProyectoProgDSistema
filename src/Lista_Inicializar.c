#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>
/*
*@Autor: Roberth Loor
*@Descripción: Inicializa una lista
*/
int Lista_Inicializar( ListaEnlazada *lista){
	if(lista!=NULL){
		lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
  		return 1;
	}else
		return 0;
}
