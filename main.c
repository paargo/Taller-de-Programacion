#include <stdio.h>
#include <string.h>
#include "cliente.h"
#include "servidor.h"

int main(int argc, char* argv[]) {
	
	if (strncmp(argv[1],"client",7)==0) {
		validar_param_cliente(argv);
		iniciar_cliente(argv[2]);
	} else if (strncmp(argv[1],"server",6)==0){
		validar_param_servidor(argv);
		iniciar_servidor(argv[2],argv[3],argv[4]);
	} else { printf ("Parametro ingresado Incorrecto\n");
			return 1;}

    return 0;
}

