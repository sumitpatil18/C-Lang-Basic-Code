#include<stdio.h>
void fun(char full_name[]){
    printf("Full Name is:%s",full_name);
}
int main(){
    char full_name[30];
    printf("Enter  the full name:");
    fgets(full_name,30,stdin);
    fun(full_name);
    return 0;
}