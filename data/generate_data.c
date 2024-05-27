#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "generate_data.h"

void generate_data(int num_lobsters, int max_size, int max_value) {
    srand(time(NULL));
    for (int i = 0; i < num_lobsters; i++) {
        int size = rand() % max_size + 1;
        int value = rand() % max_value + 1;
        printf("Lobster %d: Size = %d cm, Value = %d gold coins\n", i + 1, size, value);
    }
}

int main() {
    int num_lobsters = 10; // Exemplu
    int max_size = 10;
    int max_value = 50;

    generate_data(num_lobsters, max_size, max_value);

    return 0;
}
