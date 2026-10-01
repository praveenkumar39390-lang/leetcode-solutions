#include <assert.h>
#include <stdio.h>

/* Track the cheapest earlier price and the best profit seen so far. */
int maxProfit(int *prices, int pricesSize) {
    if (pricesSize < 2) {
        return 0;
    }

    int minimumPrice = prices[0];
    int bestProfit = 0;
    for (int day = 1; day < pricesSize; day++) {
        int profit = prices[day] - minimumPrice;
        if (profit > bestProfit) {
            bestProfit = profit;
        }
        if (prices[day] < minimumPrice) {
            minimumPrice = prices[day];
        }
    }
    return bestProfit;
}

int main(void) {
    int firstPrices[] = {7, 1, 5, 3, 6, 4};
    assert(maxProfit(firstPrices, 6) == 5);

    int secondPrices[] = {7, 6, 4, 3, 1};
    assert(maxProfit(secondPrices, 5) == 0);

    puts("Best Time to Buy and Sell Stock: all tests passed");
    return 0;
}