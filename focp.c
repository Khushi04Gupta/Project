//C program for the E-library
// Management System
#include <stdio.h>
#include <stdlib.h> // to import standard libraries 
#include <string.h> // to import strings and use strings  
 
// Create Structure of Library
struct library{
    char book_name[50];
    char name[50];
    int total[50];
    char author[30];
    int pages;
    float price;
    
};
 
int main()
{
    // Create a instance
    struct library lib[100];
 
    char ar_nm[80], bk_nm[80];
 
    // Keep the track of the number of books available in the library
    int i=0, input=0, count=0,a=0;
 
    
 
    // Iterate the loop
    while (input != 6) {
 
        printf("\n\n******** WELCOME TO E-LIBRARY ********\n\n");
        printf("\n\n 1. Add book information\n 2. Display book information\n 3. List all books of given author present in library\n 4. Issue Book\n 5. List count of books in the library\n 6. Exit");
 
        // Enter the book details
        printf("\n\nEnter one of the above option: ");
        scanf("%d", &input);
 
        // Process the input
        switch (input) {
 
        // Add book
        case 1:
 
            printf("Enter book name = ");
            scanf("%s", &lib[i].book_name);
 
            printf("Enter author's name = ");
            scanf("%s", &lib[i].author);
 
            printf("Enter number of pages in book = ");
            scanf("%d", &lib[i].pages);
 
            printf("Enter cost of book = ");
            scanf("%f", &lib[i].price);
            count+=1;
            i+=1;
 
            break;
 
        // Print book information
        case 2:
            
            if (count==0){
                printf("No books stored");
            }
            else{printf("\nYou have entered the following information:\n");
            for (i = 0; i<count; i++) {
 
                printf("\n  Book name = %s",lib[i].book_name);
 
                printf("\n  Author name = %s",lib[i].author);
 
                printf("\n  Pages = %d",lib[i].pages);
 
                printf("\n  Cost = %f",lib[i].price);
            }
            }
            break;
 
        // Take the author name as input
        case 3:
            printf("Enter author's name : ");
            scanf("%s", ar_nm);
            for (i = 0; i < count; i++) {
 
                if (strcmp(ar_nm,lib[i].author)== 0){
                    printf("Book = %s \n",  &lib[i].book_name);
                }
            }
            break;
 
        // Issuing a book
        case 4:
        printf("Maximum number of books that can be issued = 10\n");
        printf("\nEnter your name: ");
        scanf("%s",&lib[i].name);
        printf("\nNumber of books to be issued:");
        scanf("%d", &a);
        if(count==0){
                    printf("Sorry! No books available at this moment.");
                }
        for(i = 0; i<count; i++){
            
            if(a<=10){
                printf("\nBook to be issued:");
                scanf("%s", &lib[i].book_name);
                printf("\n  *****Book has been issued***** ");
                count-=a;
                
            }
            
            else{
                printf("\nCan't issue more than 10 books.");
            }
        }
        break;
           
        //Total count of book in library   
        case 5:
         printf("\n Number of books in library : %d",count);
            break;

        case 6:
        printf("*****Thank you for visiting library!*****");
            exit(0);
        }
    }
    return 0;
}