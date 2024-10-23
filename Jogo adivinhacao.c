// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Imprime o cabeçalho do jogo
    printf("****************************************\n");
    printf("*Bem vindo ao nosso jogo de adivinhação*\n");
    printf("****************************************\n");
    
    int numerosecreto = 15;
    
    // armazenar o chute
    int chute;
    printf ("Qual é o número secreto? Será que você consegue adivinhar?:\n");
    
    scanf ("%d", & chute);
    printf ("Seu chute foi %d \n", chute);
    
    if (chute == numerosecreto) {
    printf ("Você acertou! Parabéns!\n");
    }else {
    printf ("Você errou! Que pena!\n");
    
    }
}