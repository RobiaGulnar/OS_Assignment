
#include <stdio.h>

int main()
{
    int num, sum=0;
    int pid=fork;

    /* Input a number from user */
    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);
    if(fork==0)
    {
    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }
   }
  else
  {
    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }
}


    printf("Sum of digits = %d", sum);

    return 0;
}