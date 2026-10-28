 
#include <stdio.h>

int main() {
    int transactions, i;
    int successfulTransaction = 0;
    float loadAmount, commission;
    float totalLoadSold = 0;
    float totalCommission = 0;

    printf("===== MOBILE LOADING STATION =====\n");

    printf("Enter number of transactions: ");
    scanf("%d", &transactions);

    if (transactions <= 0) {
        printf("Invalid number of transactions!\n");
        return 0;
    }

    for (i = 1; i <= transactions; i++) {
        printf("\nTransaction #%d\n", i);
        printf("Enter load amount: ");
        scanf("%f", &loadAmount);

        if (loadAmount <= 0) {
            printf("Invalid Amount! Transaction rejected.\n");
        } else {
            commission = loadAmount * 0.05;

            printf("Load Amount: %.2f\n", loadAmount);
            printf("Commission: %.2f\n", commission);
            printf("Transaction successful!\n");

            totalLoadSold += loadAmount;
            totalCommission += commission;
            successfulTransaction++;
        }
    }

    printf("\n===== FINAL SUMMARY =====\n");
    printf("Total Load Sold: %.2f\n", totalLoadSold);
    printf("Total Commission: %.2f\n", totalCommission);
    printf("Successful Transactions: %d\n", successfulTransaction);

    return 0;
}
