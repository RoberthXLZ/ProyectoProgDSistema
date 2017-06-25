/*
@autor: Roberth Loor
@Descripcion: Metodo que me permite agregar o insertar un objeto al inicio de la lista

*/
int Lista_InsertarInicio(ListaEnlazada *lista, void *objeto){
	//Se comprueba que que la lista exista en caso de que no retornamos 0 que indicará que no se pudo instertar
	if(lista==NULL|| objeto==NULL){
		return 0;
	}
	//Creamos el Elemento que va a conetener el objeto que recibimos de parametro
	ElementoLista *nuevo=NULL;
	//Asiganmos espacio de memoria  a nuevo
	nuevo = (ElementoLista *)malloc (sizeof(ElementoLista));
	if (nuevo == NULL){
		//En caso de que no se pueda imprimimos un error en la asignación y retornamos 0
		printf("Error en la Asignacion de memoria, Intente Nuevamente");
		return 0;
	}
	//Si la lista esta vacia 
	if((lista->numeroElementos) == 0){
		//Al siguiente y anterior que apunta nuevo le asignamos la direccion de memoria que ocupa ancla 
		nuevo->siguiente=&(lista->ancla);
		nuevo->anterior= &(lista->ancla);
		//accedemos al siguiente y el anterior de ancla y le comlocamos el nodo nuevo
		(lista->ancla).siguiente=nuevo;
		(lista->ancla).anterior=nuevo;
	}
	//En caso que no sea vacia la lista realizamos lo siguiente
	else{
		ElementoLista *inicio=lista->ancla.siguiente;
		nuevo->siguiente=inicio;
		nuevo->anterior = &(lista->ancla);
		inicio->anterior=nuevo;
		(lista->ancla).siguiente=nuevo;
	}
	//Ahora nuevo apunta 
	nuevo->objeto=objeto;
	lista->numeroElementos += 1;
	return 1;
}



