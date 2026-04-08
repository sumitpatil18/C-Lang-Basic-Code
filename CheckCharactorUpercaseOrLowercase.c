#include<stdio.h>
int main(){
    char ch;
    printf("Enter The Character ");
    scanf("%c",&ch);

    if (ch>= 'A' && ch<='Z'){
        printf("Enter Character Is Uper Case");
    }
    else if (ch>='a' && ch<='z'){
        printf("Enter Charater Is lower Case");
    }
    else{
        printf("Invalid Input Enter");
    }
    return 0;
}