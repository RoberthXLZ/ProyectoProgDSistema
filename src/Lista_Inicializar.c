extern int Lista_Inicializar(ListaEnlazada *lista){
	//Asignacion de espacio de memoria para la lista recibida como parametro
	lista= ListaEnlazada*(sizeof(listaEnlazada));
	if(lista==NULL){
	printf("Error en la Asignacion de Memoria\n");
	printf("Intente recuperar la memoria");
	return -1;
	}
	lista->ancla=ElementoLista*(sizeof(listaEnlazada));
	if(lista->ancla=NULL){
			printf("Error en la Asignacion de Memoria\n");
			printf("Intente recuperar la memoria");
			return -1;
	}
	
	
	lista->ancla.siguiente=&(lista->ancla);
		lista->ancla.anterior=&(lista->ancla);
		lista->ancla.objeto=NULL;
		lista->numeroElementos = 0;
  		return 1;
		
	}

