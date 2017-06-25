
#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

/*
*@Autor: Roberth Loor
*@Descripción: Me Permite Crear una lista que no contenga ningun elemento
*/
int Lista_Vacia(ListaEnlazada *lista){
		lista->ancla.siguiente=NULL;
		lista->ancla.anterior=NULL;
		lista->ancla.objeto=NULL;
		return lista->numeroElementos=0;
	}
