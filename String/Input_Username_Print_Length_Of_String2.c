#include<stdio.h>
#include<string.h>
void fun(char str[]){
    printf("%d",strlen(str));
}
int main(){
    char str[20];
    printf("Enter the name:");
    fgets(str,20,stdin);
    fun(str);
}