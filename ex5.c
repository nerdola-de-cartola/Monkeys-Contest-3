#include <stdio.h>

long long int XOR(long long int a, long long int b) {
    long long int r;
    char x[10000] = {0};
    char y[10000] = {0};
    char v[10000] = {0};
    int i, j, maior;

    i = 0;
    while(a != 0) {
        x[i] = a%2;
        i++;
        a = a/2;
    }

    j = 0;
    while(b != 0) {
        y[j] = b%2;
        j++;
        b = b/2;
    }

    maior = i;
    if(j > maior) maior = j; 

    for(i = maior-1; i >= 0; i--) {
        if(x[i] != y[i]) v[i] = 1;
        else v[i] = 0;
    }

    r = 0;
    for(i = maior-1; i >= 0; i--) {
        r *= 2;
        r += v[i];
    }

    return r;
}

int main(void) {
    long long int a, b, axb;
    int i;

    scanf("%lld%lld", &a, &b);
    
    axb = XOR(a, b);
    //printf("%lld\n", axb);
    if(axb%2 == 0) printf("PULE A CATRACA\n");
    else {
        for(i = 0; i < 99999; i++) {
            if((XOR(a, i) % 2) == 0) {
                printf("PULE A CATRACA\n");
                return 0;
            }
            else if((XOR(b, i) % 2) == 0) {
                printf("PULE A CATRACA\n");
                return 0;
            }
        }
    }
    printf("ACEITE A OPRESSÃO\n");

    return 0;
}