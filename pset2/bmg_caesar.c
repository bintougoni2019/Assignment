#include<stdio.h>
#include<cs50.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
    int main(int argc, string argv[])
{
if(argc==2)
{
    int k=atoi(argv[1]);
    string plaintext=get_string("plaintext");
    printf("cyphertext: ");
    for(int i=0; i<strlen(plaintext); i++)
if(isalpha(plaintext[i]))
        {
        if(isupper(plaintext[i]))
        {
            printf("%c",(((plaintext[i]- 65)+ k)%26)+ 65);
        }
        if(islower(plaintext[i]))
        {
            printf("%c",(((plaintext[i]- 97)+ k)%26)+ 97);
        }
        }
else
{
    printf("invalid");
    return 0;
}
}
}

