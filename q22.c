#include <stdio.h>
int main() {
float cost_price, selling_price;
float amount percentage;
printf("Enter cost_price: ");
scanf("%f", &cost_price);
printf("Enter sellsing_price: ");
scanf("%f", &selling_price);
if (selling_price > cost_price) {
amount = selling_price cost_price;
percentage = (amount / cost_price)*100;
printf("profit = %.2f\n", amount);
printf("profit percentage = %.2f%%\n", percentage);
}
else if (selling_price < cost_price){
amount = cost_price -selling_price;
percentage = (amount / cost_price)*100;
printf("Lossn= %.2f\n", amount);
printf("Loss percentage = %.2f%%\n", percentage);
}
else {
printf("No profit No loss.\n");
}
return 0;
}
