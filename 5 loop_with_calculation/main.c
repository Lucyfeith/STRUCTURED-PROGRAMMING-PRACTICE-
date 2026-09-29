#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum  =0, i;



   for (i=1; i<=100 ; i++){

    if (i% 7==0){

        sum=sum+i;
    }






   }

    printf("sum of multiples of 7from 1 to 100 is %d\n",sum);


    return 0;
}
