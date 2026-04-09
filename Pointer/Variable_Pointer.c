#include <stdio.h>
void Demo()
{
    int age = 25, age2 = 25;
    //Assign the address of age and age2 to pointers
    int *ptr1 = &age;
    int *ptr2 = &age2;
    printf("%u,%u Difference is : %u\n", ptr1, ptr2, ptr1 - ptr2);
    printf("Campariason is %u:\n", *ptr1 == *ptr2);

    // This Pointer's why value is not change
    int z = 10;
    int *ptr5 = &z;
    printf("Value Of Pointer *ptr5 :%d\n", *ptr5);
    printf("Adrress Of Pointer *ptr5 :%d\n", ptr5);
    *ptr5 = *ptr5 + 5;
    printf("value of pointer:%d\n", *ptr5);
    printf("Adrress of pointer:%d\n", ptr5);

    double a = 10.5;
    double *ptr11 = &a;
    printf("1) Value of pointer *ptr11:%f\n", *ptr11);
    printf("2) Value of pointer *ptr11:%u\n", ptr11);
    ptr11++;
    printf("3) Value of pointer *ptr11:%f\n", *ptr11);
    printf("4) Value of pointer *ptr11:%u\n", ptr11);
}
int main()
{
    Demo();
    return 0;
}