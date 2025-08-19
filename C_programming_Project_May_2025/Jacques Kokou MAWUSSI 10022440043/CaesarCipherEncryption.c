#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
   int key;
   char plaintext[1000];

    printf("Caesar Cipher Encryption\n");

    
    printf("Enter key: ");
    scanf("%d", &key);
    getchar(); 
    printf("plaintext: ");
    fgets(plaintext, 1000, stdin);
    
    printf("ciphertext: ");
    for (int i = 0; plaintext[i] != '\n' && plaintext[i] != '\0'; i++) {
        char c = plaintext[i];
        if (isupper(c)) {
            printf("%c", ((c - 'A' + key) % 26) + 'A');
        } else if (islower(c)) {
            printf("%c", ((c - 'a' + key) % 26) + 'a');
        } else {
            printf("%c", c); 
        }
    }
    printf("\n");
    
    return 0;
}