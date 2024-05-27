#ifndef LOBSTER_H
#define LOBSTER_H

typedef struct {
    int size;
    int value;
} Lobster;

int knapsack(Lobster lobsters[], int num_lobsters, int capacity);

#endif // LOBSTER_H