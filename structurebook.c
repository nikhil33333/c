#include<stdio.h>

void bookprint(struct Book);
 
struct Book

{
 
char name[100];
 
char author[100];
 
char genre[10];

}

b;

main()

{
 
 
printf("Enter book name\n");
 
scanf("%s",&b.name);
 
printf("Enter book author\n");
 
scanf("%s",&b.author);
  
printf("Enter book name\n");
 
scanf("%s",&b.genre);
 bookprint(b);


}

void bookprint(struct Book b1)

{
 printf("Book Name=%s\n",b1.name);

 printf("Book author=%s\n",b1.author);
 
printf("Book genre=%s\n",b1.genre);


}