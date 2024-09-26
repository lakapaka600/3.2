#include <stdio.h>

int main(void) {
int num1;
    printf("inserisci num1");
    scanf("%d", &num1);
    if (num1 >=0) {
        printf("num1 è positivo");

    } else {
        printf("num1 è negativo");
    }
    return 0;
}
