#include <stdio.h>
#include <string.h>

int main() {
    char name[] = {'D', 'e', 'b', 'a', 'd', 'a', 'r', 's', 'h', 'i', '\0'};
    for (int i = 0; i < sizeof(name) - 1; i++) {
        printf("%c", name[i]);
    }

    printf("\n");
    
    char name2[] = "Debadarshi Omkar";
    printf("I am %s.\n", name2);

    printf("The address of name2 is: %u\n", name2);
    printf("The address of name2 is: %u\n", &name2);
    printf("The address of first character of name2 is: %u\n", &(name2[0]));
    printf("The address of second character of name2 is: %u\n", &(name2[1]));

    // 'gets' function
    char village[30];
    printf("Enter your village name: ");
    // gets(village);
    printf("You are from %s.\n", village);

    // 'puts' function
    printf("I'm also from ");
    puts(village); // It prints the string and takes the cursor to next line.
    printf("How are you ?\n");

    // 'strlen' function
    printf("Length of name is: %d\n", strlen(name));
    printf("Length of name2 is: %d\n", strlen(name2));

    // 'strcpy' function
    char a[] = "stringA", b[8];
    strcpy(b, a);
    puts(b);

    // 'strcat' function
    char c[] = "stringC";
    char d[] = "stringD";
    strcat(c,d);
    puts(c);

    // 'strcmp' function
    char e[] = "stringE", f[] = "stringF";
    int result = strcmp(e, f);
    printf("Comparision result: %d\n", result);
    return 0;
}