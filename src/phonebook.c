/*
WEEK 1 — TASK 5 (Structs - Phonebook)

Goal:
Practice structs and arrays.

Task:
1. Create a struct Person with:
   - string name
   - string phone
2. Create an array of persons (size 5 or 10).
3. Ask the user for a name.
4. If found, print the phone number.
5. If not found, print "Not found".

Bonus (optional):
Allow the user to add a new contact.

Rules:
- You must use struct.
- Use strcmp() to compare names.
*/


#include <stdio.h>
#include <string.h>

typedef struct {
   char name[50];
   char phone[20];
} Person;

int main() {
   Person people[5] = {
      {"Ender", "0505-562-28-28"},
      {"Furkan", "0544-228-56-66"},
      {"Halil", "0535-582-41-96"},
      {"Lorik", "0785-866-77"},
      {"Hakan", "0532-731-00-92"},
   };

   char search_name[50];
    printf("TR____Isim giriniz____US____Write name: ");
    scanf("%s", search_name);
    int found = 0;

    for (int i = 0; i <5; i++) {

      if (strcmp(people[i].name, search_name) == 0) {
         printf("Phone: %s\n", people[i].phone);
            found = 1;
            break;
      }
    }

    if (!found) {
    printf("not found__Bulunamadi\n");
    }
    return 0;
}

