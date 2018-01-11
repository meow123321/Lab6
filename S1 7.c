#include <stdio.h>

void minmax(int a[], int *min, int *max) {
    int i;
    *min=*max=a[0];
    for(i=0; i<10; i++) {
        if(a[i]<=*min)
            *min=a[i];
        if(a[i]>=*max)
            *max=a[i];
    }
}

int main () {
    int a[10]={-1,23,4,67,5,-23,1,76,34,2};
    int min;
    int max;

    minmax(a, &min, &max);

    printf("Minimul este %d si maxumul este %d", min, max);


    return 0;
}
