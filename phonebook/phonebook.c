#include "st.h"

int main() {
  int step = 1;
  int var = 0;
  int amount = 0;
  char name[20];
  char search_name[20];
  int number = 0;
  int card_search_by_name = -1;
  int search_number=-1;
  int number_search=000000;
  int number_del=999999;
  int del=999999;
  FILE *fd;
  fd = fopen("cards.txt", "r");
  if (fd == NULL) {
    printf("File not found\n");
    FILE *create;
    create = fopen("cards.txt", "wb");
    fclose(create);
    printf("New file create\n");
    fd = fopen("cards.txt", "r");
    fread(&book, 1, sizeof(book), fd);
    fclose(fd);
    printf("size of Book %ld byte\n", sizeof(book));
  } else {
    printf("Open file\n");
    fread(&book, 1, sizeof(book), fd);
    fclose(fd);
    printf("Phonebook load\n");
  }
  FILE *rd;
  rd = fopen("numbers.txt", "r");
  if (rd == NULL) {
    printf("Book is clear, create first file card\n");
    FILE *nw;
    nw = fopen("numbers.txt", "wb");
    fclose(nw);
    nw=fopen("numbers.txt", "w");
    fwrite(&lastcard, 1, sizeof(lastcard), nw);
    printf("write in new file %d\n", lastcard);
    fclose(nw);
  } else {
    fread(&lastcard, 1, sizeof(lastcard), rd);
    fclose(rd);
  }
  
  while (step == 1) {

    printf("1. Create a new subscriber card \n");
    printf("2. Search by phone number \n");
    printf("3. Search by last name \n");
    printf("4. Save change \n");
    printf("5. Delete card by phone number \n");
    printf("6. Exit program \n\n");
   /* for (int i=0; i<10; i++) {
    printf("%s is %d\n", book[i].name, book[i].number);
    }
    */     //open first 10 card under main
    scanf("%d", &var);
    switch (var) {
    case 1:
      printf("Enter Last name\n\n");
      scanf("%s", name);
      printf("Enter number\n\n");
      scanf("%d", &number);
      add_card(name, number);
      printf("Card create!\n\n");
      break;
    case 2:
	printf("Enter Search numbers\n");
	scanf(" %d", &number_search);
	search_number=search_card_by_number(number_search);
	if (search_number==-1) {
	printf("Number not found\n");
	}
	else {
	printf("Name from %d is %s\n\n", number_search, book[search_number].name);
	}
      break;
    case 3:
      printf("Enter Last name for search\n");
      scanf(" %s", search_name);
      card_search_by_name = search_card_by_name(search_name);
      if (card_search_by_name == -1) {
        printf("Name not found\n");
      } else {
        printf("Phone number of %s is %d\n\n", search_name,
               book[card_search_by_name].number);
      }

      break;
   
    case 4:
      fd=fopen("cards.txt", "w");
      fwrite(&book, sizeof(book), 1, fd);
      fclose(fd);
      printf("Phonebook SAVE!\n\n");
      break;
    case 5:
	printf("Enter number to delete\n");
	scanf("%d", &del);
	number_del=delete_card_by_number(del);
     	if (number_del==-1) {
		printf("Number for delete not faund\n\n");
	} else {
	for (int i=number_del; i<1000; i++) {
	strcpy(book[i].name, book[i+1].name);
	book[i].number=book[i+1].number;
	}
	printf("Card delete\n");
	}
       	break;

    case 6:
      step++;
      break;
    }
  }

  printf("File close \n");
}
