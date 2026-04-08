#include<stdio.h>
#include<math.h>
void Find_Armstrong(){
    int a,x,result,count=0,cnt,sum=0,mul=1,rem;
    printf("Enter The Number:");
    scanf("%d",&a);
    x=a;
    while (x!=0)
    {
        // Find The How Many Number Enter 
       x=x/10;
       count++;//1+1+1
    }
    cnt=count;
    x=a;
    while (x!=0)    // (153,15)
    {
        //Find The Number By Remainder Multiplication
        rem=x%10;       //value of in rem 3,5,1
        while (cnt!=0)
        {
            // Calculate The Number
            mul*=rem;
            cnt--;
        }
        //27+125+1=153
        sum=sum+mul;
        cnt=count;
        mul=1;
        x=x/10;
        
    }
    if(sum==a){
        printf("Given number is  armstong number:%d",a);
    }else{
        printf("Given number is not armstong number:%d",a);
    }
    
 }
int main(){
    Find_Armstrong();
    return 0;
}