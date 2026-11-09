#include <stdio.h>

int main() {
    int count[26] = {0};
    char a;

    while (scanf(" %c", &a) == 1) {
        if (a < 'A' || a > 'Z') {
            break;
        }
        count[a - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            printf("%c : %d\n", i + 'A', count[i]);
        }
    }

    return 0;
}
