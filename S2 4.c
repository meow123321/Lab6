#include <stdio.h>
#include <stdlib.h>

int find_langerst(int *a, int S[]) {
    int i;

    i=0;
    *a=S[0];
    while(S[i] != '\0') {
        if(S[i]>*a)
            *a=S[i];
        i++;
    }
    return 0;
}

int main() {
   int x[5]={12,2,4,35};
   int L;

   find_langerst(&L, x);

   printf("Valoarea cea mai mare este %d", L);

   return 0;
}
