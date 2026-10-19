/*
Algorithm
1.Start
2.Read radius from user, r
3.Find area of circle using the formula area = Pi*r*r
4.Print result
5.Stop
*/

#include <stdio.h>
void main()
{
  int r,Pi=3.14,area;
  printf("Enter radius:");
  scanf("%d",&r);
  area=Pi*r*r;
  printf("Area of Circle = %d",area);
}

/*Sample output
Enter radius:4
Area of Circle = 50.240002
*/
