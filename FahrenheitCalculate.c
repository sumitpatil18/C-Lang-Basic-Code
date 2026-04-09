#include<stdio.h>

void fun(){
    int a,Farhenheit;
    printf("Enter The Selsius :");
    scanf("%d",&a);
    //      a * 9 → multiply Celsius by 9
    //    / 5 → divide result by 5
    //    + 32 → add 32 to get Fahrenheit
    Farhenheit=(a*9/5)+32;
    printf("Ferhenheitn Is :%d",Farhenheit);

}
int main(){
    fun();
    return 0;
}