#include <stdio.h>

void defrac(double num, int tni, double frad) {
    tni = (int) num;
    frad = num - tni;
}

int main(void) {
    double n = 3.123456, frac = 2.34;
    int i = 1;

    defrac(n, i, frac);

    printf("%d    %.2lf", i, frac);
    return 0;
}