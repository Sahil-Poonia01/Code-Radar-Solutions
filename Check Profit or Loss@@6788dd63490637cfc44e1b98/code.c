#include <stdio.h>

void checkTransactionResult(float costPrice, float sellingPrice) {
    // Comparing cost price and selling price to determine the result
    if (sellingPrice > costPrice) {
        printf("Profit\n");
    } else if (sellingPrice < costPrice) {
        printf("Loss\n");
    } else {
        printf("No Profit No Loss\n");
    }
}

int main() {
    float costPrice, sellingPrice;
    
    // Taking input for cost price and selling price
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);
    
    // Call function to check the result of the transaction
    checkTransactionResult(costPrice, sellingPrice);
    
    return 0;
}
