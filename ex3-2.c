#include <stdio.h>

typedef long long int lli;

int main(void) {
    int n, size, qtd, i, j, k, in_maior, l;
    lli sum, maior_soma, total, input;

    scanf("%d%d%d", &n, &size, &qtd);
    lli v[qtd][5000];

    l = size;
    for(i = 0; i < n; i++) {
        scanf("%lld", &input);
        for(j = 0; j < qtd; j++) {
            if(j <= i && j <= i - qtd) v[j][i] = input;
            else v[j][i] = 0;
        }
        l--;
    }

    for(i = 0; i < qtd; i++) {
        for(j = 0; j < n; j++) {
            printf("%lld ", v[i][j]);
        }
        printf("\n");
    }

    return 0;
}