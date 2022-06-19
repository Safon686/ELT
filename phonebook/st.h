#include <string.h>
#include <stdio.h>

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
	if (lastcard == 999) return -1;
	lastcard++;
        strcpy(book[lastcard].name,name);
	book[lastcard].number=number;
}

int search_card_by_name(const char *name) {
}

int search_card_by_number(int number) {
}

void delete_card_by_name(const char *name) {
}

