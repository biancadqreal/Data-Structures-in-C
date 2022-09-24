#include <stdio.h>
#include <stdlib.h> // contém o NULL, calloc, malloc e free

int main(){
    //Alocação de um vetor estático (memória stack)
    int vs[5] = {0, 10, 20, 30, 40};

    puts("### VETOR ESTATICO");
    printf("&vs = %p vs = %p\n", &vs, vs);

    for (int i = 0; i < 5; i++){
        printf("&vs[%d] = %p, vs[%d] = %d\n", i, &vs[i], i, vs[i]);
    }
    puts("\n");

    puts("### VETOR DINÂMICO COM MALLOC");
    //alocação de um vetor dinâmico usando malloc (memória Heap)
    int *vh_mal = (int *) calloc (5, sizeof(int));

        printf("&vh_mal = %p, vh_mal = %p\n", &vh_mal, vh_mal);


    for (int i = 0; i < 5; i++){
        printf("&vh_mal[%d] = %p, vh_mal[%d] = %d\n", i, &vh_mal[i], i, vh_mal[i]);
    }
    free(*vh_mal);

    return 0;
}
