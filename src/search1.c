/*
WEEK 1 — TASK 4 (Linear Search - Strings)

Goal:
Practice string comparison.

Task:
1. Create an array of strings (names).
2. Ask the user for a name.
3. Search the array.
4. Use strcmp() to compare strings.
5. Print:
Found
or
Not found

Rules:
- You must use strcmp().
- Do NOT use == for string comparison.
*/

#include <stdio.h>
#include <string.h>

int main () {
    char *names [] = {"Ender", "Furkan", "hasan", "halil",};
    int size = 4;
    char search_name [50];
    int found = 0;

    printf("US  => Write a name\n");
    printf("TR  => Isim giriniz\n");
    scanf("%s", search_name);

    for ( int i = 0; i < size; i ++) {
        if (strcmp(names[i], search_name) == 0) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf( "Found");
    }
        else {
            printf( "not found ");
        }
return 0;

}






