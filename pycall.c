/***gcc -o libpycall.so -shared -fPIC pycall.c*/ 
#include <stdio.h> 
#include <stdlib.h> 
int foo(int a, int b) 
{ 
  printf("you input %d and %d\n", a, b); 
  for(int i = 0;i<10000;i++) {
  	printf("%d\n",i);
  }
  return a+b; 
}  