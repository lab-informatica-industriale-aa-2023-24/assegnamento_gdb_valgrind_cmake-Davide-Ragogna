#include <stdio.h>
#include <stdlib.h>

void f() {
    int* x = malloc(10 * sizeof(int));
    if (x == NULL) {
        fprintf(stderr, "Errore: memoria non allocata\n");
        exit(EXIT_FAILURE);
    }
    x[9] = 0;
    free(x);
}

int main(void) {
    f();
    return 0;
}
