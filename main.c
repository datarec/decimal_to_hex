#include <stdio.h>


int main() {
  char hex[15] = "123456789ABCDEF";
  // number to find hex value of
  char conversion1[20] = {""}; 
  int n = 20000;
  int counter = 0; 
  while (n != 0) {
    int nd = n / 16;
    int nq = n % 16;
    conversion1[counter] = hex[nq - 1];
    printf("%s", conversion1);
    n = nd;
  }
}
