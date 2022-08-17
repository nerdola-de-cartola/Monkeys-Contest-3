#include <stdio.h>

void move(char v[3], long long unsigned int i) {
    char tmp;

    if(i%2 != 0) {
        tmp = v[1];
        v[1] = v[2];
        v[2] = tmp;    
    } else {
        tmp = v[1];
        v[1] = v[0];
        v[0] = tmp; 
    }
}

int main(void) {
    char pos[3];
    long long unsigned int i, k;

    scanf("%c%c%c", &pos[0], &pos[1], &pos[2]);
    scanf("%lld", &k);

    if(k >= 6) k %= 6;

    for(i = 1; i <= k; i++) {
        move(pos, i);
    }

    printf("%c%c%c\n", pos[0], pos[1], pos[2]);

    return 0;
}