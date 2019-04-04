/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: pablo
 *
 * Created on 4 de Abril de 2019, 14:16
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * 
 */
int N = 0;
int resultado;
char opcao = 'z';

int main(int argc, char** argv) {
    
    printf("Digite A para calcular o quadrado: \n");
    printf("Digite B para calcular o cubo: \n");
    scanf("%c", &opcao);
    
    switch(opcao) {
    
        case 'A':
     
    printf("Digite um número: \n");       
    scanf("%i", &N);
    
while(N > 1) {
    resultado = pow(N,2); // o númer colocado depois da minha variável é o expoente !!!
    printf("O o quadrado do número é %d \n", resultado);
    printf("Digite um número para calcular o quadrado, caso deseje sair digite 0: \n");
    scanf("%i", &N);
} 
    break;
    
        case 'B':
            
    printf("Digite um número: \n");
    scanf("%i", &N);
    
    while(N > 1) {
    resultado = pow(N,3); // o númer colocado depois da minha variável é o expoente !!!
    printf("O o quadrado do número é %d \n", resultado);
    printf("Digite um número para calcular o quadrado, caso deseje sair digite 0: \n");
    scanf("%i", &N);
} 
    break;

        default:
            printf("Inválido !!! \n");  
    }                  
    return (EXIT_SUCCESS);
}

