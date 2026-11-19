#include <stdio.h>
#include <limits.h>


void printBinary(unsigned char value) {
    printf("Binary: ");
    for (int bit = CHAR_BIT - 1; bit >= 0; bit--) {
        printf("%u", (value >> bit) & 1u);
    }
    printf("\n");
}

void clearInputBuffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(void) {
    char letter;
    unsigned char value;
    int choice;

    printf("Enter a letter: ");
    scanf(" %c", &letter);
    clearInputBuffer(); 
    value = (unsigned char)letter;

    do {
        printf("\n--- Current Letter: '%c' ---\n", letter);
        printf("1. Print Character\n");
        printf("2. Print Decimal\n");
        printf("3. Print Hexadecimal\n");
        printf("4. Print Binary\n");
        printf("5. Print Variable Size\n");
        printf("6. Print All Values\n");
        printf("7. Enter a new letter\n");  
        printf("0. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            clearInputBuffer();        
            choice = -1;        
            continue;
        }
        clearInputBuffer();

        switch (choice) {
            case 1:
                printf("Character: %c\n", letter);
                break;

            case 2:
                printf("Decimal: %u\n", (unsigned int)value);
                break;

            case 3:
                printf("Hexadecimal: %02X\n", (unsigned int)value);
                break;

            case 4:
                printBinary(value);
                break;

            case 5:
                printf("Size: %zu byte(s)\n", sizeof(letter));
                break;

            case 6:
                printf("Character: %c\n", letter);
                printf("Decimal: %u\n", (unsigned int)value);
                printf("Hexadecimal: %02X\n", (unsigned int)value);
                printBinary(value);
                printf("Size: %zu byte(s)\n", sizeof(letter));
                break;

            case 7:
                printf("Enter the new letter: ");
                scanf(" %c", &letter);
                clearInputBuffer();
                value = (unsigned char)letter; // تحديث القيمة بناءً على الحرف الجديد
                printf("Letter updated to '%c'!\n", letter);
                break;

            case 0:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}
