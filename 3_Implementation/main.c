/**
 * @file main.c
 * @author Team Maverick
 * @brief Home page for Crypto Concept
 * @date 2021-08-21
 */


#include<stdio.h>
#include "fun.h"
#include<ctype.h>

int main(){
    char choice;
    printf("\nWelcome to Crypto Concept?\n\nYour kickstart into the Cryptography Journey\n\n");
    while(1){

    printf("\n\nEnter a Number between 1-6 to continue your journey");
    printf("1. Introduction\n2. Caesar Cipher\n3.Monoalphabetic Cipher\n4. Playfair Cipher\n5. Hill Cipher\n6. Polyalphabetic Cipher\n7. Exit the program ");
    scanf("\n%c",&choice);
    
    switch(choice){
        case '1': intro();
                break;
        case '2': caesar_intro();
                break;
        case '3': printf("\n\n Work in progress for this module"); 
                break;
        case '4': printf("\n\n Work in progress for this module"); 
                break;
        case '5': printf("\n\n Work in progress for this module"); 
                break;     
        case '6': printf("\n\n Work in progress for this module"); 
                break;
        case '7': break;
        default: printf("\n\n Opps! Select the correct option"); 
                break;         
    }
    if(choice=='7') break;
    }
}