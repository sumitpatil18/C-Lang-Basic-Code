#include<stdio.h>
#include<string.h>
char Count_Vowels(char str[]){
    char newstr;
    int count=0;
    for (int  i = 0;str[i]!='\0'; i++){
        if(str[i]=='a'||str[i]=='i'||str[i]=='e'||str[i]=='o'||str[i]=='u'){
            newstr=str[i];
            count++;
            printf("%c\t",newstr);
        }
    }
    return count;
}
char main(){
    char str[30]="Hello Word";
   printf("\n Total Vowel's are occure in givan string :%d",Count_Vowels(str)); 
    return 0;
}