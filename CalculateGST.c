#include<stdio.h>
void fun(){
    float p[3];;
    float total,finalValue,gst;

    printf("Enter The Three Product Value:\n");
    scanf("%f",&p[0]);       
    scanf("%f",&p[1]);
    scanf("%f",&p[2]);
   
    // printf("Calculate the first product :%f\n",p[0]+(0.18*p[0]));
    // printf("Calculate the Second product :%f\n",p[1]+(0.18*p[1]));
    // printf("Calculate the third product :%f\n",p[2]+(0.18*p[2]));
    total=p[0]+p[1]+p[2];
    gst=total*(18/100);
    printf("price of gst is: %f",gst);
    finalValue=total+gst;
    printf("Toatal price of product :%f",finalValue);
}
int main(){
    fun();
    return 0;
}