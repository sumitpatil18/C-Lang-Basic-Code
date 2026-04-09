#include<stdio.h>
#include<string.h>
// strcpy() = This function use to coppy to old string value in new string to use a strcpy() function 
void Demo_Function(char *old_string,char *new_string){
    printf("%s\n",old_string);
    printf("%s\n",new_string);
    // why this code not exicute to strcpy function: 
    strcpy(new_string,old_string);
    printf("value of new string is:%s\n",new_string);
}
int main(){
    char *old_string="sumit Patil";
    char *new_string="Narendra Girase";
    Demo_Function(old_string,new_string);
    return 0;
}