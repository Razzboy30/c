#include<stdio.h>
#include<string.h>
// #include<stdiob.h>
struct book
{
    char bookName[50];
    char author[50];
    double rating;
};

int main(){

    struct book book1;
    book1.rating = 7.4;
    strcpy(book1.bookName, "Epic Shit");
    strcpy(book1.author, "Ankur");

    printf("%s\n", book1.bookName);
    printf("%lf", book1.rating);
}
