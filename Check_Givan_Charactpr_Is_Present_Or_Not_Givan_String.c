#include<stdio.h>
#include<string.h>
// Check Given charactor is present or no
void CheckCharactor(char str[]){
    char check;
    printf("Give the charactor to check present or not:");
    scanf("%c",&check);
    int count=0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i]==check){
            count++;
        }
    }
    if(count>0){
        printf("Givan charactor is present in string:\n");
    }else{
        printf("Givan charactor is not present:");
    }
    
}
void main(){
    char str[20]="hello word";
    CheckCharactor(str);
    //return 0;
}