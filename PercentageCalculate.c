#include <stdio.h>
void fun(){

    int math, eng, ele, c, java, total;
    float percentage;
    printf("Enter the Math mark:");
    scanf("%d", &math);
    printf("Enter the Eng mark:");
    scanf("%d", &eng);
    printf("Enter the Ele mark:");
    scanf("%d", &ele);
    printf("Enter the C mark:");
    scanf("%d", &c);
    printf("Enter the Java mark:");
    scanf("%d", &java);

    total = math + eng + c + java + ele;
    printf("Total mark's is : %d\n", total);
    percentage = (total * 100) / 500.0;
    printf("Percentage is : %f", percentage);
}
int main(){
    fun();
    return 0;
}