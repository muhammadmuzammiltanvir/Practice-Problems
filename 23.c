#include <stdio.h>

char encrypt(char ch) 
{
    return ch ^ 0xFF; 
}

char decrypt(char ch) 
{
    return ch ^ 0xFF; 
}

int main() 
{
    char original, encrypted, decrypted;

    printf("Enter a character: ");
    scanf(" %c", &original);

    encrypted = encrypt(original);
    printf("Encrypted character: %c\n", encrypted);

    decrypted = decrypt(encrypted);
    printf("Decrypted character: %c\n", decrypted);

    return 0;
}

