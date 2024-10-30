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
    
    // SE O CHUTE FOR
    
    if (chute == numerosecreto) {
    printf ("Você acertou! Parabéns!\n");
    
    // CASO CONTRÁRIO
    }else {
        if(chute > numerosecreto) 
    printf ("Você errou! Que pena!\n");
    printf ("O seu chute foi maior que o número secreto, tente novamente.\n");
        
    if(chute < numerosecreto) 
    printf ("Você errou! Que pena!\n");
    printf ("O seu chute foi menor que o número secreto, tente novamente.\n");
    
    }
}

