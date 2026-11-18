#include <stdio.h>
#include <string.h>

int minChanges(char s[]) {
    char currentChar = s[0];

    int count = 0;
    int minChanges = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == currentChar) {
            count++;
            continue;
        }

        if (count % 2 == 0) {
            count = 1;
        } else {
            count = 0;
            minChanges++;
        }

        currentChar = s[i];
    }

    return minChanges;
}

int main() {
    char s[100];

    printf("Enter the string: ");
    scanf("%s", s);

    printf("Minimum changes: %d\n", minChanges(s));

    return 0;
}