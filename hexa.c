#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%5d", i * j);
        }
        printf("\n");
    }
}

int isNumber(const char *str) {
    while (*str) {
        if (!isdigit(*str)) {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(int argc, char *argv[]) {
    if (argc > 1 && isNumber(argv[1])) {
        int n = atoi(argv[1]);
        printMultiplicationTable(n);
    } else {
        printf("Please provide a valid number as an argument.\n");
    }
    return 0;
}
