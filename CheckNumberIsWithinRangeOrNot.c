#include <stdio.h>
int main()
{
    // Enter First Number For Check Ghreter Than 9>100
    int a;
    printf("Enter The Number: ");
    scanf("%d", &a);

    if ((a >= 9) && (a <= 100)){
        printf("Number Is 9>100:");
    }
    else{
        printf("Number Is Not 9>100");
    }
}