#include <stdlib.h>
#include <string.h>
#include "lobster.h"

int knapsack(Lobster lobsters[], int num_lobsters, int capacity) {
    int dp[num_lobsters + 1][capacity + 1];
    memset(dp, 0, sizeof(dp));

    for (int i = 1; i <= num_lobsters; i++) {
        for (int w = 0; w <= capacity; w++) {
            if (lobsters[i - 1].size <= w) {
                dp[i][w] = (lobsters[i - 1].value + dp[i - 1][w - lobsters[i - 1].size] > dp[i - 1][w]) ?
                           lobsters[i - 1].value + dp[i - 1][w - lobsters[i - 1].size] : dp[i - 1][w];
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[num_lobsters][capacity];
}