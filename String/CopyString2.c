#include<stdio.h>
#include<string.h>
void fun(char old_string[],char new_string[]){
    printf("%s\n",old_string);
    printf("%s\n",new_string);
    strcpy(new_string,old_string);
    printf("value of new string is:%s\n",new_string);
}
int main(){
    char old_string[]="Sumit Patil";
    char new_string[]="Narendra Girase";
    // strcpy(new_string,old_string);
    // printf("Value of string:%s",new_string);
    fun(old_string,new_string);
    return 0;
}