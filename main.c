#include <stdio.h>
#include <string.h>

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    char word[15];
    scanf("%s", word);

    int length = strlen(word);
    int count[26] = {0};

    for (int i = 0; i < length; i++) {
        count[word[i] - 'A']++;
    }

    unsigned long long result = factorial(length);
    for (int i = 0; i < 26; i++) {
        if (count[i] > 0) {
            result /= factorial(count[i]);
        }
    }

    printf("%llu\n", result);
    return 0;
}
