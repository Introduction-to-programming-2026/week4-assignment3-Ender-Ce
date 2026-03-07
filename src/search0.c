/*
WEEK 1 — TASK 3 (Linear Search - Integers)

Goal:
Practice arrays and linear search.

Task:
1. Create an array of integers.
2. Ask the user for a number.
3. Search the array manually (no library search).
4. If found print:
Found
   Otherwise print:
Not found

Rules:
- You must use a loop.
- Do NOT use any built-in search function.
*/


#include <stdio.h>

int main() {
   int numbers [] = {20,22,56,36,200,100,2005,1,3,5,2};
   int size = 11;
   int search_value;
   int found = 0;

   printf("US  => Enter a number: \n");
printf("TR  => Bir sayi giriniz: \n");

scanf("%d", &search_value);

for (int i = 0; i <size; i++) {

   if (numbers [i] == search_value) {
   found =1;
   break;
 }
}
if (found) {
   printf("Found\n");
}

else {
   printf("not found\n");
}
return 0;

}

