#include<stdio.h>
#include<string.h>
    void funSlice(char str[],int starti,int endi){
    for (int  i = 0; i <=strlen(str); i++){
        if(i>=starti && i<=endi){
            printf("%c",str[i]);   
        }
    }
}
int main(){
    char str[20]="helloword";
    int starti,endi;
    printf("Enter the slice start index and ending index :");
    scanf("%d%d",&starti,&endi);
    funSlice(str,starti,endi);
    return 0;
}