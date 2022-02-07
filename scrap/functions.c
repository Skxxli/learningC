#include <stdio.h>
#include <assert.h>


int classify_triangle(int side1, int side2, int side3);
long reverse_digits(long n);
unsigned long catalan(short int n);


/*Based on input, this function will return a number denoting whether the sides
  result in a valid traingle.*/
int classify_triangle(int side1, int side2, int side3) {
   
   if (side1 <= 0 || side2 <= 0 || side3 <= 0 || (side1 + side2 <= side3) ||
       (side1 + side3 <= side2) || (side2 + side3 <= side1)){
      return -1;
   } else if (side1 == side2 && side2 == side3) {
      return 3;
   } else if (side1 == side2 || side2 == side3 || side1 == side3){
      return 2;
   } else {
      return 0;
   }
}


long reverse_digits(long n) {

   if (n < 0 || (n % 10 == 0 && n != 0)){
      return -1;
   } else {

      long result = 0;
      int remainder = n;
      
      while (remainder > 0){
         result= result + remainder % 10;
         remainder= remainder / 10;
         result= (remainder > 0)? result * 10 : result;
      }
      return result;
   }
}

unsigned long catalan(short int n) {

   unsigned long result = 0;

   if (n < 0){
      return -1;
   } else if (n == 0){
      return 1;
   } else {
      result=  (2 * (2*n - 1) * catalan(n - 1)) / (n + 1);
   }
   return result;
    
} 
   

int main(void) {

   long long result ;

  assert(classify_triangle(1, 2, 3) == -1);
  assert(classify_triangle(1, 2, 9) == -1);
  assert(classify_triangle(0, 2, 3) == -1);
  assert(classify_triangle(71, 72, 71) == 2);
  assert(classify_triangle(9, 9, 9) == 3);
  assert(classify_triangle(12, 42, 31) == 0);
  printf("%d\n", classify_triangle(1, 4, 3));
  assert(classify_triangle(1, 4, 3) == -1);
  printf("%d\n", classify_triangle(0, 0, 0));
  assert(classify_triangle(0, 0, 0) == -1);
  assert(classify_triangle(1, 1, 2) == -1);

  assert(reverse_digits(321) == 123);
  printf("%ld\n", reverse_digits(0));
  assert(reverse_digits(0) == 0);
  assert(reverse_digits(-9) == -1);
  assert(reverse_digits(100) == -1);
  assert(reverse_digits(3287345720) == -1);
  assert(reverse_digits(17) == 71);
  assert(reverse_digits(24678) == 87642);

   printf("%lu\n", catalan (3));

   result= reverse_digits(216) + catalan(12); 
   assert(result == 1 || result != 1) ;

   printf("%lu\n", catalan (3));

   
  printf("\nThe test passed!\n");


  return 0;
}
