/*
WEEK 1 — TASK 2 (Recursion)

Goal:
Practice recursion.

Task:
1. Ask the user for a positive integer n.
2. Use a recursive function to print:

#
##
###
####

Rules:
- You must create a recursive function.
- You cannot use a loop to print rows.
- Base case must be correct.
*/

#include <stdio.h>

void draw(int n) {
    if (n<= 0) {
    return;
}

draw(n - 1);

for (int i = 0; i < n; i++) {
    printf("#");
 }
 printf("\n");
}

int main () {
    int n;
    do {
        printf("n: ");
        scanf("%d", &n);
    } while (n < 1);
   draw(n);
    return 0;

}
