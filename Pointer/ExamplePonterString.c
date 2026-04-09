#include<stdio.h>
#include<string.h>
void Demo_pointer_String(){
    char *str1="sumit";
    char *str2="patil";
    printf("Value of str1:%s\n",str1);
    printf("Value of str2:%s\n",str2);
    // after using to sting pointer eg(*str 1,*str2) to apply to  any string function why  this functiona's are axecute:
    
    strcat(str1,str2);
    printf("Value of after the concatenates:%s",str1);
}
int main(){
    Demo_pointer_String();
}