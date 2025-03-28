#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char book_name[100][20];
    char ar_nm[30];
    char author[100][20];
    int pages[200],i,count,input;
    float price[100];

    i=input=count=0;
    while(input !=5){
        printf("\n## Welcom To E-Library ##");
        printf("\n1. Add Book information");
        printf("\n2. Display book information");
        printf("\n3. List all books of given author");
        printf("\n4. List the count of books in the library");
        printf("\n5. Exit");
        printf("\nEnter one of the above : ");
        scanf("%d",&input);
        switch(input){
            case 1: printf("\nEnter book name= ");
                    scanf("%s",book_name[i]);
                    printf("\nEnter author name = ");
                    scanf("%s",author[i]);
                    printf("\nEnter pages = ");
                    scanf("%d",&pages[i]);
                    printf("\nEnter price = ");
                    scanf("%f",&price[i]);
                    count++;
                    break;
            case 2: printf("You have entered the following information\n");
                    for(i=0;i<count;i++){
                        printf("Book name = %s", book_name[i]);
                        printf("\nAuthor name = %s", author[i]);
                        printf("\nPages = %d",pages[i]);
                        printf("\nPrice = %f",price[i]);
                    }
                    break;
            case 3:    printf("\nEnter author name: ");
                       scanf("%s", ar_nm);
                    for(i=0;i<count;i++){
                       if(strcmp(ar_nm,author[i])==0)
                       printf("%s %s %d %f",book_name[i],author[i],pages[i],price[i]);
                   }
                       break;
            case 4:   printf("\n No of books in library : %d ",count);
                      break;
            case 5:   exit(0);
        }
    }
    return 0;
}
