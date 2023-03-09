#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

#define STACK_SIZE 100

int top = 0;
int contents[STACK_SIZE] = {0};

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void stack_push(char i);
char stack_pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(void) {
    char ch;

    printf("Enter RPN expression: ");

    while ((ch = getchar()) != '\n') {
        if (isdigit(ch)) {
            stack_push(ch);
        }
        else
        switch (ch) {
            case '+': 
        }
    }
}

void stack_overflow(void) {
    printf("\nExpresion is too complex");
    exit(EXIT_FAILURE);
}

void stack_underflow(void) {
    printf("\nnot enough operands in expresion");
    exit(EXIT_FAILURE);
}

void make_empty(void) {
    top = 0;
}

void stack_push(char c) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = c;
}

char stack_pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

bool is_full(void) {
    return top = STACK_SIZE;
}

bool is_empty(void) {
    return top = 0;
}
