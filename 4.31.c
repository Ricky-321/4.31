#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 4; j > i; j--) {
            printf("%s", " ");
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {  //<--¥´¬P¸¹
            printf("%s", " ");
        }
        for (int k = 8; k > 2 * i + 1; k--) {
            printf("%s", "*");
        }
        printf("\n");
    }
    return 0;
}