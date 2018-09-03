#include <stdio.h>
#include "servidor.h"
#include <sys/types.h>
#include <sys/socket.h>

int validar_param_servidor(char * argv){
	
	printf("valida parametros servidor");
	
	return 0;
}


int iniciar_servidor(char * port){
    int Descriptor; 
	Descriptor = socket (AF_INET, SOCK_STREAM, 0); 
if (Descriptor == -1) 
    printf ("Error en apertura de socket servidor\n");

    printf("Servidor");
    return 0;
}

