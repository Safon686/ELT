#include "st.h"


int main() {
    int step = 1;
    int  var = 0;
    int amount = 0;
    char name[20];
    int number=000000;
    FILE *fd;
    fd=fopen("cards.txt", "r+b");
        if (fd == NULL) {
                printf("File not found \n");
        }
        else {
                printf("Open file \n");
                fread(&book, 1000, sizeof(book[1000]), fd);
                printf("Size of book %ld\n", sizeof(*book));
                printf("Phonebook load \n");
        }

    while (step==1) {

    printf("1. Create a new subscriber card \n");
    printf("2. Search by phone number \n");
    printf("3. Search by last name \n");
    printf("4. Open Phonebook from file\n");
    printf("5. Save Phonebook \n");
    printf("6. Delete card by phone number \n");
    printf("7. Exit program \n\n");
    scanf("%d", &var);
    switch (var) {
        case 1:
		printf("Enter Last name\n\n");
		scanf("%s", name);
		printf("Enter number\n\n");
		scanf("%d", &number);
		add_card(name,number);
		printf("Card create!\n\n");
        break;
        case 2:
       		printf("%s: %d\n", book[0].name, book[0].number); 
        break;    
        case 3:
                printf("%s: %d\n", book[1].name, book[1].number);
        break;
        case 4:
		
	break;
        case 5:
        	fwrite(&book,sizeof(book)*lastcard, 1, fd);
                printf("Phonebook SAVE!\n\n");
        break;
        case 6:
        
        break;

	case 7:
		step++;
	break;
    }
}

fclose(fd);
printf("File close \n");
}
