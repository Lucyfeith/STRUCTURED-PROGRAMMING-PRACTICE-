  #include <stdio.h>
#include <stdlib.h>

int main()
{

 int n,i,sum=0,sum_squares=0,sum_cubes=0;


    printf("Enter a number: ");
    scanf("%d",&n);

    for (i=1;i<=n;i++){
        sum=sum+1;
        sum_squares=sum_squares+(i*i);
        sum_cubes=sum_cubes+(i*i*i);


    }

    if (n<=0){
        printf("please enter a positive number \n");

    }else {
        printf("\nfor numbers 1 to %d: \n",n);
        printf("sum = %d\n",sum);
        printf("sum of squares = %d \n",sum_squares);
        printf("sum of cubes = %d \n",sum_cubes);











    }






































    return 0;
}
