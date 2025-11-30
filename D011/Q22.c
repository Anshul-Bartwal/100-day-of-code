//Write a program to find profit or loss percentage given cost price and selling price.
// Input 1:
// 1000 1200
// Output 1:
// Profit 20%

# include <stdio.h>
int main(){
    int cp, sp;
    float profit_loss, percentage;
    printf("Enter cost price and selling price: ");
    scanf("%d %d", &cp, &sp);
    profit_loss = sp - cp;
    if (profit_loss > 0) {
        percentage = (profit_loss / cp) * 100;
        printf("Profit %.2f%%\n", percentage); // here %% means % will be displayed in output
    } else if (profit_loss < 0) {
        percentage = (-profit_loss / cp) * 100;
        printf("Loss %.2f%%\n", percentage);
    } else {
        printf("No profit, no loss\n");
    }
    return 0;
}