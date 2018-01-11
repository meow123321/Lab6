#include <stdio.h>
void split_time(int total_sec, int *hr, int *min, int *sec) {
    int x;
    int y;
    if(total_sec>0) {
        *hr=(total_sec/3600);
        x=total_sec%3600;
        if(x>0) {
            *min=(x/60);
            y=total_sec%60;
            if(y>0) {
                *sec=y;
            }
        }
    }
}

int main() {
    int a;
    int b;
    int c;
    int n;

    printf("Introduceti numarul de secunde dorit: ");
    scanf("%d", &n);

    split_time(n, &a, &b, &c);


    printf("%d ==> %d hr, %d min, %d sec", n, a, b, c);

    return 0;
}
