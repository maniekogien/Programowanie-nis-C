#include <stdio.h>

int getPaddingLength(int n, int isHex) {
    int maxNumber = n * n;
    int length = 0;
    while (maxNumber != 0) {
        if(isHex)
            maxNumber /= 16;
        else
            maxNumber /= 10;
        length++;
    }
    return length;
}

int printMultiplicationTable(int n, int isHex) {
    int padding = getPaddingLength(n, isHex);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (!isHex)
                printf("%*d ", padding, i * j);
            else
                printf("%*x ", padding, i * j);
        }
        printf("\n");
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printMultiplicationTable(n, argc != 1);
    return 0;
}