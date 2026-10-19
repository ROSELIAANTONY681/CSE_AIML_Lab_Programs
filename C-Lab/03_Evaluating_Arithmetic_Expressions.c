/*
Algorithm
1.Start
2.read two numbers a, b and operator storing variable from user.
3.Use switch case for the value in operator.
  3.1.If '+' is the operator, display sum = a+b.
  3.2.If '-' is the operator, display difference = a-b.
  3.3.If '*' is the operator, display product = a*b.
  3.4.If '/' is the operator,check if b is equal to 0:
    3.4.1. If it is 0, display b cannot be 0.
    3.4.2. Else display quotient = a/b
  3.5.If operator is none of them , display invalid 
4.Stop
*/

#include <stdio.h>
void main()
{
  char op;
  float a,b;
  printf("Enter two numbers with operator:");
  scanf("%f %c %f" ,&a,&op,&b);
  switch(op)
  {
    case '+':
      printf("sum=%f",a+b);
      break;
    case '-':
      printf("difference=%f",a-b);
      break;
    case '*':
      printf("product=%f",a*b);
      break;
    case '/':
      if(b==0)
        printf("second number cannot be zero);
      else
        printf("quotient=%f",a/b);
    default:
      printf("Invalid Input");
  }
}

/*Sample Output
Enter two numbers with operator:5+3
sum=8
Enter two numbers with operator:5-3
difference=2
Enter two numbers with operator:5/3
quotient=1
Enter two numbers with operator:5*3
product=15
  */
