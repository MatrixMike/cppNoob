/*
 * functionalTest3.cpp
 * 
 * 2017 Mike Hewitt <mikeh@mikeh-Inspiron-1501>
 * 
 * https://en.wikipedia.org/wiki/Anonymous_function#Go
 * https://chris.mowforth.com/2011/07/31/installing-grand-central-dispatch-on-linux/
 */


#include <iostream>
#include <stdio.h>
#include <dispatch/dispatch.h>

int main(void) {
  void (^count_loop)() = ^{
    for (int i = 0; i < 100; i++)
      printf("%d\n", i);
    printf("ah ah ah\n");
  };

/* Pass as a parameter to another function */
  dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), count_loop);

/* Invoke directly */
  count_loop();

  return 0;
}

