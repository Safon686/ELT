#include <stdio.h>
#include <string.h>

struct phonebook {
  char name[20];
  int number;
};

struct phonebook book[1000];
int lastcard = -1;

/* returns 0 if card was added
 * returns -1 if card was not added, because book is full
 */
int add_card(const char *name, int number) {
  if (lastcard == 999) {
    return -1;
  }
  FILE *nd;
  nd = fopen("numbers.txt", "r");
  fread(&lastcard, 1, sizeof(lastcard), nd);
  printf("Lastcard from file %d\n", lastcard);
  fclose(nd);
  lastcard++;
  nd=fopen("numbers.txt", "w");
  fwrite(&lastcard, 1,sizeof(lastcard), nd);
  fclose(nd);
  strcpy(book[lastcard].name, name);
  book[lastcard].number = number;
}

int search_card_by_name(const char *name_search) {
  for (int i = 0; i < 1000; i++) {
    if (strcmp(book[i].name, name_search) == 0) {
      return i;
    }
   }
  
  return -1;
}


int search_card_by_number(int number_search) {
  for (int i=0; i<1000; i++) {
    if (book[i].number == number_search) {
    return i;
    }
  }
  return -1;
}


int delete_card_by_number(int delete_card ) {
for (int i=0; i<1000; i++) {
    if (book[i].number == delete_card) {
    return i;
    }
  }
  return -1;

}
