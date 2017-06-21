/*
 * functionalTest2.c
 * 
 * Copyright 2017 Mike Hewitt <mikeh@mikeh-Inspiron-1501>
 * 
 */

#include <stdio.h>

//* this is the definition of the anonymous function */
#define lambda(l_ret_type, l_arguments, l_body)         \
  ({                                                    \
   l_ret_type l_anonymous_functions_name l_arguments    \
   l_body                                               \
   &l_anonymous_functions_name;                         \
   })

#define forEachInArray(fe_arrType, fe_arr, fe_fn_body)                                    \
{                                                                                         \
  int i=0;                                                                                \
  for(;i<sizeof(fe_arr)/sizeof(fe_arrType);i++) {  fe_arr[i] = fe_fn_body(&fe_arr[i]); }  \
}

typedef struct __test
{
  int a;
  int b;
} testtype;

void printout(const testtype * array)
{
  int i;
  for ( i = 0; i < 4; ++ i )
    printf("%d %d\n", array[i].a, array[i].b);
  printf("\n");
}

int main(void)
{
  testtype array[] = { {0,1}, {2,3}, {4,5}, {6,7}};

  printout(array);
 // printf(sizeof(array[]));
  /* the anonymous function is given as function for the foreach */
  forEachInArray(testtype, array,
    lambda (testtype, (void *item),
    {
      int temp = (*( testtype *) item).a;
      (*( testtype *) item).a = (*( testtype *) item).b;
      (*( testtype *) item).b = temp;
      return (*( testtype *) item);
    }));
  printout(array);
  return 0;
}
/*
0 1
2 3
4 5

1 0
3 2
5 4

*/
