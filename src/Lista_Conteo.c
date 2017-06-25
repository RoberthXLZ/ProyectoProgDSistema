#include "miLista.h"
#include <stdlib.h>
#include<stdio.h>

/*
*@Autor: Roberth Loor
*@Descripción: Método que retorna cuantos elementos existe en la lista, en caso de que no exista la Lista retorna -1
*/


int Lista_Conteo(ListaEnlazada *lista){
	
	if(lista==NULL){
		return -1;
	}else 
	{
		return lista->numeroElementos;
	}
}

