/**
 * @file fun.h
 * @author Team Maverick
 * @brief Header File for CryptoWhat
 * @date 20-08-2021
 */

/**
 * @brief Enum description for error messages
 * 
 */

typedef enum error_msg{
    CORRECT_ANSWER=1,
    WRONG_ANSWER=0,
    INVALID_INPUT=-1
}error_msg;

void intro();

void caesar_intro();

error_msg caesar_calc(char* in,int* key, char* outpu,char* ciphert);