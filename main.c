#include "primes.h"
#include "stdio.h"

#define MAX_PRIMES 1000
int main(int argc, char** argv) {
  int theprimes[MAX_PRIMES];
  primes(theprimes,MAX_PRIMES);
  for(int i = 0 ; i < MAX_PRIMES ; i++ ){
    printf("%d\n",theprimes[i]);
  }
}

