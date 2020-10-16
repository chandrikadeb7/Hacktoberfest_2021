#include <stdio.h>

int main() {
  
  int i, quick_sum = 1000000;
  float total_amt = 0.01;

  for(i=1; i<=30; i++) {
    printf("Day %d: Amount %.2f\n", i, total_amt);
    total_amt = total_amt * 2;
  }

  printf("\nTotal amount after 30 days is: %.2f \n", total_amt);

  return 0;
}
