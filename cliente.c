#include <stdio.h>
#include "cliente.h"
#include <sys/types.h>
#include <sys/socket.h>

int validar_param_cliente(char * argv){
	
	printf("valida parametros cliente");
	
	return 0;
}



int iniciar_cliente(char * host,char * port,int cantInst,char * arrayInstr){
    
	Host = gethostbyname ("Localhost"); 
if (Host == NULL) 
{ 
    printf ("Error, Host no obtenido\n"); 
	return 1;
}
	
int Descriptor; 
	Descriptor = socket (AF_INET, SOCK_STREAM, 0); 
if (Descriptor == -1)
{ 
    printf ("Error en apertura de socket cliente\n");
	return 1;
}
	
if (connect (Descriptor, (struct sockaddr *)&Direccion,sizeof (Direccion)) == -1)
{ 
    printf ("Error en la conexion con el servidor\n"); 
	return 1;
}
	
    printf("Cliente");
    return 0;
}
