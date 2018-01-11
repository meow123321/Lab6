#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strend_pointer(char *s, char *t) {
    s+=strlen(s)-strlen(t);
    while(*s==*t && *s != '\0') {
        s++;
        t++;
    }

    if(*s== '\0')
        return 1;

    return 0;


}

int main() {
    int i;
    int R;
    char A[16]="LaboratorulSase";
    char B[5]="Sase";

    R = strend_pointer(A, B);

    printf("Return %d", R);

    return 0;
}
