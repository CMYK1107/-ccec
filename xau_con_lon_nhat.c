#include <stdio.h>
#include <string.h>

void check(char *s, char *result) {
    int len = strlen(s);
    int j = 0;
	result[j]=s[0];
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] >= result[j - 1]) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';

    for (int i = 0; i < j / 2; i++) {
        char temp = result[i];
        result[i] = result[j - i - 1];
        result[j - i - 1] = temp;
    }
}

int main() {
    char s[100001];
    char result[100001];

    scanf("%s", s);

    check(s, result);

    printf("%s\n", result);

    return 0;
}

