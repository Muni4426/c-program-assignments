#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int id;
    float price;
};

void add_book(struct Book books[], int *count) {
    printf("Enter the book details:\n");
    printf("Title: ");
    scanf("%s", books[*count].title);
    printf("Author: ");
    scanf("%s", books[*count].author);
    printf("ID: ");
    scanf("%d", &books[*count].id);
    printf("Price: ");
    scanf("%f", &books[*count].price);

    (*count)++;
    printf("Book added successfully!\n");
}

void display_books(struct Book books[], int count) {
    int i;

    printf("Book details:\n");
    for (i = 0; i < count; i++) {
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("ID: %d\n", books[i].id);
        printf("Price: %.2f\n\n", books[i].price);
    }
}

void list_books_by_author(struct Book books[], int count) {
    char author[50];
    int i, found = 0;

    printf("Enter the author name: ");
    scanf("%s", author);

    printf("Books by author %s:\n", author);
    for (i = 0; i < count; i++) {
        if (strcmp(books[i].author, author) == 0) {
            printf("%s\n", books[i].title);
            found = 1;
        }
    }

    if (!found) {
        printf("No books found for author %s.\n", author);
    }
}

void list_book_count(int count) {
    printf("Number of books in the library: %d\n", count);
}

int main() {
    struct Book books[50];
    int choice, count = 0;

    while (1) {
        printf("\nLibrary Management System\n");
        printf("1. Add book details\n");
        printf("2. Display book details\n");
        printf("3. List all books of given author\n");
        printf("4. List the count of books in the library\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_book(books, &count);
                break;
            case 2:
                display_books(books, count);
                break;
            case 3:
                list_books_by_author(books, count);
                break;
            case 4:
                list_book_count(count);
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}

