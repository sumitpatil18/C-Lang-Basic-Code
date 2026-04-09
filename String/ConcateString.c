#include<stdio.h>
#include<string.h>
// strcat() = This function is use to concatenates to two string :
void fun(char str1[],char str2[]){
    strcat(str1,str2);
    printf("After using strcat function valur :%s",str1);
    //prin("value of str1 is:%s",str1);
}
int main(){
    char str1[]="Hello";
    char str2[]="Word";
    fun(str1,str2);
    return 0;
}
