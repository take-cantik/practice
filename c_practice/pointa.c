#include <stdio.h>

int main(void) {
    int i, j;
    int count = 0;
    char word[100];
    char answer[] = "setup's";

    for (i = 0; i < 100; i++) {
        scanf("%s", word);

        for (j = 0; answer[j] != "\0"; j++) {
            if (word[j] == answer[j]) {
                count++;
            }
        }

        if (count == 6)
            break;

        count = 0;
    }

    if (count == 6) {
        printf("setup's %d", i);
    } else {
        printf("setup's none");
    }
}

