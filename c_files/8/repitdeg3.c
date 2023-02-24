#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) {
    bool digit_seen[N] = {false};
    int occurence[N] = {0}, num, digit;

    printf("Enter number to check for repetition: ");
    scanf("%d", &num);

    while ( num > 0) {
        digit = num % 10;

        occurence[digit]++;

        num /= 10;
    }

    printf("digit:\t    0 1 2 3 4 5 6 7 8 9\n");
    printf("occurences:");
    for (int i = 0; i < N; i++) {
        printf("%2d", occurence[i]);
    }

    printf("\n");
}