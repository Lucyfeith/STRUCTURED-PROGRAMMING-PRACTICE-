#include <stdio.h>
#include <stdlib.h>

int main()
{
   int choice;

    while (1){

        printf("\n1. say hello\n");
         printf("2. exit\n");
         printf("enter choice: ");
        scanf("%d",&choice);


        if (choice==1){

            printf("hello how are you?\n");
        }

        else if (choice==2){
            printf("bye bye \n");
            break;

        }

        else {
         printf("wrong choice try again.\n");

        }


















    }























    return 0;
}
