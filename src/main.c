#include <stdio.h>
#include <stdlib.h>
#include "lobster.h"

int main() {
    int capacity = 10;
    int num_lobsters = 4;

    Lobster lobsters[] = {
        {4, 20},
        {3, 15},
        {2, 10},
        {5, 25}
    };

    int max_value = knapsack(lobsters, num_lobsters, capacity);
    printf("Maximum value: %d\n", max_value);

    return 0;
}
