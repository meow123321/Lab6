#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int strcat_pointer( char s[20],const char *t) {
    int i;

    i=0;
    while(s[i] != '\0')
        i++;
    while(*t !='\0')
        s[i++] = *t++;
    s[i++]= '0';

    return 0;
}

int main() {
    char A[20]="Laboratorul";
    char B[20]="Sase";


    strcat_pointer(A,B);

    printf("%s", A);

    return 0;
}
