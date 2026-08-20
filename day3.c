#include<stdio.h>
int main() {
float celsius,fahrenheit;
if (scanf("%f",&celsius) == 1) {
fahrenheit = (celsius * 9 / 5) + 32;
printf("fahrenheit=%.Of\n",fahrenheit);
}
return 0;
}
