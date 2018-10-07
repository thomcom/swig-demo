

%module primes
#include "carrays.i"
%array_class(int, intArray);
%{
  extern int primes(int* array, int array_size);
%}

%include "carrays.i"

%inline %{
  int* getArray(int num) {
    int* array = malloc(num*sizeof(int));
    array[0] = 1;
    array[1] = 2;
    return array;
  }
%}

#include <stdio.h>
%inline %{
  void printArray(int* array, int num) {
    for(int i = 0 ; i < num ; ++i) {
      printf("%d\n", array[i]);
    }
  }
%}

extern int primes(int* array, int array_size);


