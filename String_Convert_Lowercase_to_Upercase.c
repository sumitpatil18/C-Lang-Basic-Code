#include<stdio.h>
#include<string.h>
    void fun(char str[]){
    int store=0,newstore=0;
    for(int i=0;i<strlen(str);i++){
        store=str[i];
        newstore=store-32;
        printf("%c",newstore);
    }
}
    
int main(){
   // char str[]="hiiisumit";
   char str[15];
    printf("Enter the charactor:");
    scanf("%s",&str);
    fun(str);
    //return 0;
}