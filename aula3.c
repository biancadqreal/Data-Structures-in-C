#include <stdio.h>

int main(){

int a;

printf("sizeof(a) = %ld bytes\n", sizeof(a)); //Qual o tamanho da variável inteira a?
printf("sizeof(int) = %ld bytes\n", sizeof(int)); //Qual o tamanho de um tipo inteiro?
printf("sizeof(shprt) = %ld bytes\n", sizeof(short)); //Qual o tamanho de um short?
printf("sizeof(long) = %ld bytes\n", sizeof(long)); //Qual o tamanho de um long?
printf("sizeof(long) = %ld bytes\n", sizeof(unsigned long)); //Qual o tamanho de um long com 0 e positivos?
printf("sizeof(float) = %ld bytes\n", sizeof(float)); //Qual o tamanho de um float?
printf("sizeof(double) = %ld bytes\n", sizeof(double)); //Qual o tamanho de um double?

printf("sizeof(void *) = %ld bytes\n", sizeof(void *)); //Qual o tamanho de um ponteiro para o vazio?
printf("sizeof(int *) = %ld bytes\n", sizeof(int *)); //Qual o tamanho de um ponteiro para inteiro ou seja, o endereço de memória de um inteiro?
printf("sizeof(int **) = %ld bytes\n", sizeof(int **)); //Qual o tamanho de um ponteiro p uma região de memória q guarda o ponteiro p inteiro?
printf("sizeof(int ***) = %ld bytes\n", sizeof(int ***)); //Qual o tamanho de um ponteiro para uma variavel inteira pointer pointer
printf("sizeof(float *) = %ld bytes\n", sizeof(float *)); //Qual o tamanho de um ponteiro para float ou seja, o endereço de memória de um float?

}



