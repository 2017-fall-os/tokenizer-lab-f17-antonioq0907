#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include"mytoc.h"

char *myToc(char *strg, char *delim){
    char *token;
    
    if(strg != NULL ){                      //Checks if the string is empty,if is not, memory is allocated to begin delimiter search
        tempPointer = strg;
        token = strg;
    }
    else{
        if(*tempPointer == '\0'){           //Checks if is the end of the string
            return NULL;
        }
        token = tempPointer;
    }
    
    while(*tempPointer != '\0'){            //Loop that iterates through the string until it reach the end using tempPointer as the index for comparison
        delte = delim;
        
        while(*delte != '\0'){              //Loop that iterates through the string until it reach the end using delte as the index for comparison
            if(*tempPointer == *delte){     //Check if char is the delimiter 
                if(tempPointer == token){   // NO delimiter, moves to the next pointer
                    token++;
                    tempPointer++;
                }
                else{
                    *tempPointer = '\0';    //YES delimiter, delete delimiter
                    tempPointer++;
                    return token;
                }
            }
            else{
                delte++;                    //NO delimiter, and end, finish search and returns
            }
        }
        
        tempPointer++;                      //NO end of string, moves to the next pointer
    }
    return token;                           // Finalized delimiter search return token
}



