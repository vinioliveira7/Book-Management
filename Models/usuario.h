#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef USUARIO_H
#define USUARIO_H

#define STRING_USER_BUFFER sizeof(char)*256

typedef struct Usuario{
    char *nome;
    char *cpf;
    char *senha;
    int cargo;
} Usuario;

Usuario *CriarUsuario(char *nome_usuario, char *cpf, char *senha, int cargo);
void DeleteUsuario(Usuario* usuario);

#endif
