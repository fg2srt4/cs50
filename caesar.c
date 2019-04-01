#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc == 2) {
        int key_length = atoi(argv[1]);
        if (key_length == 0) {
            printf("Usage: ./caesar key; key must be number\n");
            return 1;
        } else {
            string plain = get_string("Enter your message: ");
            string cypher;
            printf("ciphertext: ");
            
            for (int i = 0, n = strlen(plain); i < n; i++) {
                if (islower(plain[i])) {
                    printf("%c", (((plain[i] + key_length) - 97) % 26) + 97);
                }
                else if (isupper(plain[i])) {
                    printf("%c", (((plain[i] + key_length) -65) % 26) + 65);
                } 
                else {
                    printf("%c", plain[i]);
                }
            }
        }
    } else {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    printf("\n");
}
