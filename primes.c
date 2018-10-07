#include <stdbool.h>

int primes(int* primearray, int num_primes) {
  int i = 0;
  int n = 2;
  int len_p = 0;
  int not_prime = false;
  while(len_p < num_primes) {
    not_prime = false;
    for( i = 0 ; i < len_p ; i++ ) {
      if(n % primearray[i] == 0){
        not_prime = true;
        break;
      }
    }
    if(!not_prime) {
      primearray[len_p] = n;
      len_p += 1;
    }
    n += 1;
  }
  return 1;
}

