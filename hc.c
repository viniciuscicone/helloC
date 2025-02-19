
#include <stdio.h>
#include <time.h>


int main() {
    char nome[50];
    time_t agora;
    struct tm *info_tempo;

    printf("Por favor, digite seu nome: ");
    fgets(nome, 50, stdin);


    for(int i = 0; nome[i] != '\0'; i++) {
        if(nome[i] == '\n') {
            nome[i] = '\0';
            break;
        }
    }

    time(&agora);
    info_tempo = localtime(&agora);

    printf("Ola %s, Agora sao %d horas e %d minutos.\n", 
           nome, 
           info_tempo->tm_hour, 
           info_tempo->tm_min);

    return 0;
}