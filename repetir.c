#include <stdio.h>

void linea(char simbolo) {
    for(int i = 0; i < 20; i++) {
        printf("%c", simbolo);
    }
    printf("\n");
}

int main() {
linea ("#");
    return 0;
}