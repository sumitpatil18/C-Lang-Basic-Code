#include<stdio.h>
int main()
{
    int math,eng,ele,c,total;
    float persentage;
    printf("Enter the Math Mark's:");
    scanf("%d",&math);
    printf("Enter The Eng mark's:");
    scanf("%d",&eng);
    printf("Enter The Electronics Mark's:");
    scanf("%d",&ele);
    printf("Enter The C lang Mark's:");
    scanf("%d",&c);
    total=math+eng+ele+c;
    printf("Total Mark's Is : %d \n ",total);

    persentage=(total/400.0)*100;
    printf("%f\n",persentage);
    if (total>=300 && total<=400)
    {
        printf("A Gread");
    }
    else if (total>=200 && total<300)
    {
        printf("Gread B");
    }
    else if (total>=100 &&  total<200)
    {
        printf("Gread C ");
        /* code */
    }
    
    return 0;

}
