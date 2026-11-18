#include <stdio.h>
#include <limits.h>

int main(void)
{
    char letter;
    unsigned char value;
    int choice;

    printf("Enter the letter: ");
    scanf(" %c", &letter);
    value = (unsigned char)letter;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Print Character\n");
        printf("2. Print Decimal\n");
        printf("3. Print Hexadecimal\n");
        printf("4. Print Binary\n");
        printf("5. Print Variable Size\n");
        printf("6. Print All Values\n");
        printf("0. Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input.\n");
            return 1;
        }

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
                printf("Binary: ");
                for (int bit = CHAR_BIT - 1; bit >= 0; bit--) {
                    printf("%u", (value >> bit) & 1u);
                }
                printf("\n");
                break;

            case 5:
                printf("Size: %zu byte(s)\n", sizeof(letter));
                break;

            case 6:
                printf("Character: %c\n", letter);
                printf("Decimal: %u\n", (unsigned int)value);
                printf("Hexadecimal: %02X\n", (unsigned int)value);

                printf("Binary: ");
                for (int bit = CHAR_BIT - 1; bit >= 0; bit--) {
                    printf("%u", (value >> bit) & 1u);
                }
                printf("\n");

                printf("Size: %zu byte(s)\n", sizeof(letter));
                break;

            case 0:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 0);

    return 0;
}