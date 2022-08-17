#include <stdio.h>

typedef struct {
    long long int max;
    long long int price;
} Empresa;

int main(void) {
    Empresa comp[100000];
    int qtd_comp;
    long long int menor, size;
    int i;

    scanf("%d%lld", &qtd_comp, &size);

    for(i = 0; i < qtd_comp; i++) {
        scanf("%lld", &comp[i].max);
    }

    for(i = 0; i < qtd_comp; i++) {
        scanf("%lld", &comp[i].price);
    }

    menor = -1;
    for(i = 0; i < qtd_comp; i++) {
        if(comp[i].max < size) continue;
        if(comp[i].price < menor || menor == -1) menor = comp[i].price;
    }

    if(menor == -1) printf("-1\n");
    else printf("%lld\n", menor * size);
    
    return 0;
}