#include<stdio.h>

#include "espl_lib.h"



int main(void)
{ 
unsigned int num;
char c;
printf("Insert the number: num = ");
scanf("%d",&num);
printf("\nDisplay the number in words: %s \n", num_to_words(num));
printf("Do you want to insert another number?(y/n)");
scanf("%s",&c);

 if(c == 'y')
 {
    printf("Insert the number: num = ");
    scanf("%d",&num);
    printf("\nDisplay the number in words: %s \n", num_to_words(num));
 }
 if(c == 'n')
 {
    goto exit;
 }
printf("Do you want to insert another number?(y/n)");
scanf("%s",&c);
exit:
{
}
}

