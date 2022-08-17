#include <stdio.h>

typedef long long int lli;

int main(void) {
    int n, size, qtd, i, j, k, in_maior;
    lli v[5000];
    lli sum, maior_soma, total;

    scanf("%d%d%d", &n, &size, &qtd);

    for(i = 0; i < n; i++) {
        scanf("%lld", &v[i]);
    }

    total = 0;
    for(k = 0; k < qtd; k++) {
        maior_soma = 0;
        in_maior = 0;
        for(i = 0; i <= n - size; i++) {
            sum = 0;

            for(j = i; j < i + size; j++) {
                sum += v[j];
            }

            if(sum > maior_soma) {
                maior_soma = sum;
                in_maior = i;
            }
        }

        total += maior_soma;
        for(i = in_maior; i < in_maior + size; i++) {
            v[i] = 0;
        }
    }

    printf("%lld\n", total);

    return 0;
}