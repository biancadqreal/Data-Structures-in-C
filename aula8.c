#include <stdio.h>

int main(){
int v[5];

for(int i = 0; i < 5; i++){
    printf("&v[%d] = %p, v[%d] = %d\n\n", i, &v[i], i, v[i]);
}
for(int i = 0; i < 5; i++){
    scanf("%d", &v[i]);
    printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
}
}