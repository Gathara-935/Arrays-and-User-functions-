/*
//program for structures in C language 
Author: Maxwell Gathara 
Reg no:CT101/G/22271/24
Date:23/10/2024
*/
#include <stdio.h>

struct book {
    char title[30];
    char author[30];
    int publication_year;
    char isbn[13];
    float price;
};

int main() {


    // Part 2: Initialize the structure
    struct book myBook = {
    /*
        "Game Of Thrones ",
        "Tyrion Lanister",
        2024,
        "9780131103627",
        500
*/        
    };
/*
    // Part 3: Print the values
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.isbn);
    printf("Price: %.2f\n", myBook.price);
*/
    // Part 4: User input for structure fields
    struct book userBook;

    printf("\nEnter the title: ");
    scanf(userBook.title, sizeof(userBook.title), stdin);

    printf("Enter the author: ");
    scanf(userBook.author, sizeof(userBook.author), stdin);

    printf("Enter the publication year: ");
    scanf("%d", &userBook.publication_year);
      

    printf("Enter the ISBN: ");
    scanf(userBook.isbn, sizeof(userBook.isbn), stdin);

    printf("Enter the price: ");
    scanf("%f", &userBook.price);

    // Print the user-provided values
    printf("\nUser Entered Book Details:\n");
    printf("Title: %s", userBook.title);
    printf("Author: %s", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s", userBook.isbn);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}