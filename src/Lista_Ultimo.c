/*
*@Autor: Roberth Loor
*@Descripcion: Este metodo me retorna el �ltimo elemento de la Lista
*/

ElementoLista *Lista_Ultimo(ListaEnlazada *lista){
	if(lista==NULL){//SI el elemento que recibo es nulo retornamos NULL
		return NULL;
	}else{//aqui nos ayudamos del ancla para obtener el �ltimo elemento
	|return (lista->ancla).anterior;
	}
}


