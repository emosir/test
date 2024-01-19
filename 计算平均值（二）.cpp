#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char input[10];
    int sum = 0;
    int validCount = 0;

    for (int i = 0; i < n; i++) {
        scanf("%s", input);
        if (strcmp(input, "n/a") != 0) {
            int num;
            sscanf(input, "%d", &num);
            sum += num;
            validCount++;
        }
    }

    if (validCount == 0) {
        printf("n/a\n");
    }
    else {
        printf("%.2f\n", (float)sum / validCount);
    }

    return 0;
}
