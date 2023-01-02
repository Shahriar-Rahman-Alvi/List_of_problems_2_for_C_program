#include <stdio.h>

int main() {
    int counter, N;

    printf("Enter a Positive Number\n");
    scanf("%d", &N);

    printf("Printing Numbers form %d to 1\n", N);

    for(counter = N; counter > 0; counter--) {
        printf("%d \n", counter);
    }

    return 0;
}

