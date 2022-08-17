#include <stdio.h>

#define EARLY 360
#define LATE 690


int main(void) {
    int hours, min;
    int time;

    scanf("%d%d", &hours, &min);
    
    time = (hours*60) + min;

    if(time > LATE) printf("SORRY\n");
    else printf("BREAKFAST\n");

    return 0;
}