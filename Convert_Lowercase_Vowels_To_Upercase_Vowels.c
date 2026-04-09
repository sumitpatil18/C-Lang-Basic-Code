#include<stdio.h>

void fun(char str[]){
    for(int i=0; str[i] != '\0'; i++){
        if(str[i] == 'a'){
            printf("%c", 'A');
        }
        else if(str[i] == 'e'){
            printf("%c", 'E');
        }
        else if(str[i] == 'i'){
            printf("%c", 'I');
        }
        else if(str[i] == 'o'){
            printf("%c", 'O');
        }
        else if(str[i] == 'u'){
            printf("%c", 'U');
        }
        else{
            printf("%c", str[i]);
        }
    }
}

int main(){
    char str[20] = "aeioaeiou";
    fun(str);
    return 0;
}