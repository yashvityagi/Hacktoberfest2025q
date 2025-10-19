// C Program to solve stock buy and sell by  
// exploring all possible pairs

#include <stdio.h>

int maxProfit(int prices[], int n) {
    int res = 0;

    // Explore all possible ways to buy and sell stock
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (prices[j] - prices[i] > res) {
                res = prices[j] - prices[i];
            }
        }
    }
    return res;
}

int main() {
    int prices[] = {7, 10, 1, 3, 6, 9, 2};
    int n = sizeof(prices) / sizeof(prices[0]);
    printf("%d\n", maxProfit(prices, n));
    return 0;
}
