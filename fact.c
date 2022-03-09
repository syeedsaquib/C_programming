# include <stdio.h>

/* function prototype declaration here */
int fact(int );


int main()
{
  int number;
  printf("\n Enter  a Number = ");
  scanf("%d", &number);
  printf("\n factorial of %d = %d",number, fact(number)); 
}


/* Factorial Function */
int fact(int number)
{
  if (number == 1)
    return 1;
  else 
    return (number * fact(number - 1));
}
