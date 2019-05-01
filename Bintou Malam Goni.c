//Bintou Malam Goni
#define _XOPEN_SOURCE
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
         printf("usage: crack <hash");
         return 1;
    }
    const int letters_count = 53;
    string letters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string hash = argv[1];
    char salt[3];
    memcpy(salt, hash, 2);
    salt[2]='\0';
    char key_student[5] = "\0\0\0\0\0";
     for(int four = 0; four< letters_count; four++)
    {
        for(int three = 0; three<letters_count; three++)
        {
            for(int two = 0; two<letters_count; two++)
            {
                for(int one =0; one<letters_count; one++)
                {
                key_student[0] = letters[one];
                key_student[1] = letters[two];
                key_student[2] = letters[three];
                key_student[3] = letters[four];

                if(strcmp(crypt(key_student, salt),hash)== 0)
                {
                    printf("%s\n", key_student);
                    return 0;
                }
            }
          }
        }
    }

    printf("I can't crak the password");
    return 2;
}
