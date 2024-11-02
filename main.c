/*
********* Documentation Section ********************
* Presented by : Mohammed Gharieb Mohammed El-Ahmady
* Presented to : Eng Aya Abdullah Mohammed
* Brief        : Encryption & Decryption
* Date         : 6 March 2024
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"



#define n 1000

char text_arr[n];
char enc_arr[n];
char dec_arr[n];
char *text_ptr = text_arr;
char *enc_ptr = enc_arr;
char *dec_ptr = dec_arr;
int arr_sub[n];



int main()
{
    char Error_Enc = 0;
    char Error_Dec = 0;


    printf("enter your text : ");
    gets(enc_ptr);
    int Length = strlen(enc_ptr);
    memcpy(text_ptr,enc_ptr,Length+1);
    Error_Enc = encryption(enc_ptr,Length);
    printf("The orignal text is : %s\n",text_ptr);
    printf("The Encrypt text is : %s\n",enc_ptr);
    memcpy(dec_ptr,enc_ptr,Length+1);
    Error_Dec = decryption(dec_ptr,Length,arr_sub);
    printf("The Decrypt text is : %s\n",dec_ptr);


    return 0;
}


char encryption(char *text_code,int Len)
{

    char Error_state = 0;
    if(text_code == NULL)
    {
        Error_state = 1;
    }
    else
    {
        for(int i = 0; i <Len; i++)
        {
            arr_sub[i]= *(text_code+i)+'#';
            *(text_code+i)='#';
        }
    }

    return Error_state;
}


