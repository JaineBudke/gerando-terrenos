#ifndef ADICIONAIS_H
#define ADICIONAIS_H

#include <stdio.h>
#include "registro.h"

/** Função para gerar gradiente no céu **/
int gerarGradiente(int tam, PIXEL matriz[tam][tam], Modo modo);

/** Função para gerar lua **/
void gerarLua(int tam, PIXEL matriz[tam][tam]);


#endif
