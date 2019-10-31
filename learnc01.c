#include <stdio.h>
 
int main() {
  // Declare Variables
   printf("Square calculator \n");
   double sides, perimeter, area;

  // Ask for user input
   printf("Enter length  of the sides: ");
   scanf("%lf", &sides);

 //Compute perimeter and area
  perimeter = 4 * sides;
  area = sides*sides;

 //Print output
 printf("User input = %lf.\n " , sides);
 printf("Perimeter = %lf.\n " , perimeter);
 printf("Area = %lf.\n", area);
 
   return 0;





}
