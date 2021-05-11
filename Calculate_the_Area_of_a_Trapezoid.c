//C code
//This program will calculate the are of a trapezoid.
#include <stdio.h>

int main()
{
  /* Variable definition: */
  float baseA, baseB, height, area;
  /* Prompt user for baseA */
  printf("Enter the first base of the trapezoid: \n");
  //Input the baseA
  scanf("%f", &baseA);
  /* Prompt user for baseB */
  printf("Enter the second base of the trapezoid: \n");
  //Input the baseB
  scanf("%f", &baseB);
  /* Prompt user for height */
  printf("Enter the Height of the trapezoid: \n");
  //Input the height
  scanf("%f", &height);
  //Calculate the area
  area=0.5 * (baseA+baseB) * height;
  //Print the result 
  printf("Area is: %f \n", area);
  return 0;
}
