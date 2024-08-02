#include <stdio.h>

int main()
{
    int x ,y;
    printf("enter the number");
    scanf("%d", &x);
    int ones = x%10;
    int tens = (x/10) % 10 ;
    int hundred = x/100;
    
    y = ones*100 + tens *10 + hundred;
    printf("result=%d\n",y);
    
}
