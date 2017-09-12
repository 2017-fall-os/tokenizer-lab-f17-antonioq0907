#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"mytoc.h"

//Function to list the string that want to be tokenized
void printToken(char *strg,char *delim){
    int list;
    char *stringPointer,*token;
    for (list = 1, stringPointer = strg; ; list++, stringPointer = NULL){
        token = myToc(stringPointer,delim);
        if (token == NULL){
            break;
        }
        printf("\n%d: %s ",list,token);
    }
    
}

int main(){
    char delim[5];
    char test1[] = "Hello my dog's name is Darwin.",
         test2[] = "     Hello   World!    ",
         test3[] = "",
         test4[] = "          ",
         test5[] = " HelloWorld";
    
    printf("TEST 1:");     
    printToken(test1,"' '");
    printf("\n\nTEST 2:");
    printToken(test2,"' '");
    printf("\n\nTEST 3:");
    printToken(test3,"' '");
    printf("\n\nTEST 4:");
    printToken(test4,"' '");
    printf("\n\nTEST 5:");
    printToken(test5,"' '");

    printf("\n Enter a string: ");
    scanf("%[^\n]",inputStr);

    getchar();
    printf("\n Enter a delimiter : ");
    scanf("%[^\n]",delim);
    printToken(inputStr,delim);


    printf("\n");
}
