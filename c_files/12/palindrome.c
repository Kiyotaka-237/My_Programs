//checks if a message is a palindrome
#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 100

int main(void) {
    char messge[MAX_LEN], ch;
    int i, j;

    printf("Enter message to check if palindrome: ");
    while ((ch = toupper(getchar())) != '\n') {
        if ((ch >= 'A' && ch <= 'Z'))
            messge[i++] = ch;
    }

    for (i--, j = 0; j <= i; j++, i--){
        if (messge[j] != messge[i])
            break;
    }

    if (j > i)
       printf("Palindrome\n");
    else printf("message is not a palindrome\n");

    return 0;
}