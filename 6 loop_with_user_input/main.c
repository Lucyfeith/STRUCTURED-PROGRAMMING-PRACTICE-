#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,number,largest=0;


    printf("enter 10 numbers: \n");




    for (i=1;i<=10;i++){

         printf("enter number %d: ",i);
         scanf("%d",&number);

         if (i==1){
            largest=number;

         }

        else if (number>largest){
            largest=number;

        }




    }

    printf("\n the largest number is %d\n",largest);











    return 0;
}
