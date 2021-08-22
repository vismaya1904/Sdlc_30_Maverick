/**
 * @file introduction.c
 * @author Team Maverick
 * @brief An Introduction to Cryptography and Basic Definitions
 * @date 2021-08-21
 */

#include<stdio.h>
#include "fun.h"
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * @brief Introduction to Caesar Cipher
 * 
 */

void caesar_intro(){
    char plainText[100],userInput[100],cipherText[100];
    int key;

    printf("\nWelcome to Caesar Cipher\n"); 
    
    printf("\nCaesar Cipher is one of the most basic encryption/decryption techniques\n");
    printf("For encryption, move the given alphabet in Plain text by a degree of the given key\n\n");
    printf("For example, If the Plain text is 'a' and the key is '3', \nthe Cipher text will be 'd' which is 3 places away from a (clockwise)\n\n");
    printf("Similarly, for Decryption, it is the other way round\n\n");
    printf("For example, If the Cipher Text is 'g' and the key is '7', \nthe plain text is 'z', which is 7 places behind g; (anti-clockwise)\n\n ");

    

    printf("\n--------------------\nPRACTICE\n--------------------\n");
    printf("\nIMPORTANT NOTE\nAny character apart from alphabets are not encouraged for this technique.\nPlease refrain from using them\n\n");
    printf("\n----------------------------------------------------\n");

    //Practice Question ENCRYPTION

        printf("\nLet us Practice ENCRYPTION\n");
        strcpy(plainText,"LTTSMiniProject");
        printf("The Plain text is %s\n",plainText);
        key = 24 ;
        strcpy(cipherText," ");

        printf("The key is %d\n",key);
        printf("Perform Caesar Cipher Encryption and enter your answer \n");
        scanf("%s",&userInput);
        printf("Your input is %s\n",userInput);

        error_msg result = caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]);

        if(result == -1) printf("\n Oops! You seem to have entered a character which is not an alphabet \n");
        else if(result == 1) printf("\n Good Job!\n");
        else printf("\n UhOh! Wrong Answer. the correct answer is %s\n",cipherText);

    //Practice Question DECRYPTION

        printf("\nLet us now Practice DECRYPTION\n");
        strcpy(plainText,"RsqfmdhwcbGiqqsgg");
        printf("\nThe Cipher Text is %s\n",plainText);
        key = 14 ;
        strcpy(cipherText," ");

        printf("The key is %d\n",key);
        printf("Perform Caesar Cipher Decryption and enter your answer \n");
        scanf("%s",&userInput);
        printf("Your input is %s\n",userInput);

        key=26-key;

        result = caesar_calc(&plainText[0],&key,&userInput[0],&cipherText[0]);

        if(result == -1) printf("\n Oops! You seem to have entered a character which is not an alphabet \n");
        else if(result == 1) printf("\n Good Job!\n");
        else printf("\n UhOh! Wrong Answer. the correct answer is %s",cipherText);
    
}

/**
 * @brief Validate the User Input
 * @param plainT Plain Text 
 * @param key Key
 * @param userIn user Input
 * @param cipherT Cipher Text
 * @return error_msg Return if answer is correct or not
 */
error_msg caesar_calc(char* plainT, int* key, char* userIn,char* cipherT){
 
   char* checkC ;
   checkC=cipherT;
    int check=0;
    int i=0;
        while(isalpha(*plainT))
        {   
            if (isupper(*plainT))
                    *cipherT= (char)((int)(*plainT)+*key-65)%26 +65;
        
            else 
                    *cipherT = (char)((int)(*plainT)+*key-97)%26 +97;

            plainT+=sizeof(char)  ;
            cipherT+=sizeof(char);
            if(!(isalpha(*plainT))) 
                *cipherT='\0';
        }

    if(isalpha(*userIn)){
        do{
            if((int)(*checkC)!=(int)(*userIn)) 
            { check=1; 
            }

            userIn+=sizeof(char);
            checkC+=sizeof(char) ;
            if(!(isalpha(*userIn)) && *userIn!='\0'){
                return INVALID_INPUT;
            }
        
        }while(isalpha(*userIn));
   
        if(check==1)
            return WRONG_ANSWER;
        else return CORRECT_ANSWER;
    }
    else return INVALID_INPUT;
}