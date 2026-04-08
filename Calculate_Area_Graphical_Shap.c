#include<stdio.h>
#include<math.h>
int  square(){
    int a;
    printf("Area Of Square :");
    scanf("%d",&a);
    a*=a;
    printf("Area Of : %d\n",a);
    }
float circle(){
    float a;
    printf("Enter The Radias :");
    scanf("%f",&a);
    a=3.14*(pow(a,2));
    printf("Area Of Circle :%f \n",a);
}
int rectangal(){
    int higth,width,area;
    printf("Enter The higth :");
    scanf("%d",&higth);
    printf("Enter The Width :");
    scanf("%d",&width);
    area=higth*width;
    printf("Area Of Rectangal :%d\n",area);

 }
int main(){
    square();
    circle();
    rectangal();
    return 0;
}