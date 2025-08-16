#include <stdio.h>
#include <ctype.h>

int main() {
    char sequence[1000];
    printf("Enter a DNA sequence: ");
    fgets(sequence, 1000, stdin);
    
    printf("Complement: ");
    for (int i = 0; sequence[i] != '\n' && sequence[i] != '\0'; i++) {
        char base = toupper(sequence[i]);
        switch (base) {
            case 'A': putchar('T'); break;
            case 'T': putchar('A'); break;
            case 'C': putchar('G'); break;
            case 'G': putchar('C'); break;
            default: putchar(base); break; 
        }
    }
    printf("\n");
    
    return 0;
}