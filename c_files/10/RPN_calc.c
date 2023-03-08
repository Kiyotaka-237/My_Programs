#include <stdio.h>

int main(void) {
    char i[5];

    printf("djdi: ");
    for (int j = 0; j < 5; j++) {
        scanf(" %c", &i[j]);
        printf(" %c", i[j]);
    }
}