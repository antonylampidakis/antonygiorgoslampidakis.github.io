#include <stdio.h>
#include <stdlib.h>

// sinartisi gia ipologimo toy paragontikoy (factorial)
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// sinartisi gia ypologimso ton sindiasmon  (combinations)
int combinations(int m, int n) {
    int numerator = factorial(m);
    int denominator = factorial(n) * factorial(m - n);
    int result = numerator / denominator;
    return result;
}

// sinartisi gia ypologismo ton diataxeon  (permutations)
int permutations(int m, int n) {
    int numerator = factorial(m);
    int denominator = factorial(m - n);
    int result = numerator / denominator;
    return result;
}

int main() {
    int m, n;

    // eisagogi timon M kai N apo ton xristi
    printf("insert number  M: ");
    scanf("%d", &m);

    printf("insert number N: ");
    scanf("%d", &n);

    // Elenxos  M >= N, M > 0, N > 0
    if (m >= n && m > 0 && n > 0) {
        int comb = combinations(m, n);
        int perm = permutations(m, n);

        printf("sindiasmoi (M N): %d\n", comb);
        printf("diataxis (M N): %d\n", perm);
    } else {
        printf("Oi times einai anegkires.\n");
    }

    return 0;
}
