#include <stdio.h>
#include <stdlib.h>

int main()
{
   float highest,current;
     printf("enter highest rainfall: \n");
     scanf("%f",&highest);
      printf("enter current year rainfall: \n");
      scanf("%f",&current);

   if (current>highest){
    printf("current rainfall %.2f exceeds highest%.2f\n",current,highest);
    highest=current;
    printf("highest updated to %.2f\n",highest);


   }

    printf("\n");













    return 0;
}
