#define NULL 0LL



char decryption(char *text_code,int Len , int *ptr)
{


    char Error_state = 0;
    if(text_code == NULL || ptr == NULL)
    {
        Error_state = 1;
    }
    else
    {
        for(int i = 0; i <Len; i++)
        {
            *(text_code+i) = *(ptr+i) - '#';
        }
    }

    return (Error_state);
}
