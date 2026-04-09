#include<stdio.h>
void fun(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
    }
}
int main(){
    char str[25]="Hii Sumit how are you";
    fun(str);
    return 0;
}