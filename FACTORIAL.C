#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
long int num,counter=1,result=1;

printf("Enter a number to get its factorial ");
scanf("%d",&num);
if(num<0)
{
printf("\nInvalid Number");
}
while(counter<=num)
{
result = result * counter;
counter += 1;
}
printf("\n\nFactorial is = %ld",result);
getch();
}
