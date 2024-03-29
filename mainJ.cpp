#include <iostream>
#include <cstdlib>
#include <pthread.h>
// from https://www.tutorialspoint.com/cplusplus/cpp_multithreading.htm
using namespace std;

#define NUM_THREADS     5

void *PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   cout << "Hello World! Thread ID, " << tid << endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS];
// todo   int rc;
   int i;
	
   for( i=0; i < NUM_THREADS; i++ ){
    int rc;
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], NULL, PrintHello, (void *)i);
		
      if (rc){
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
	
   pthread_exit(NULL);
}
