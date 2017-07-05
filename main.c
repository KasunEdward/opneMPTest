#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void hello(void); /*thread function*/
int main(int argc,char* argv[]) {
  /*get the no of the threads from the command line*/
    int thread_count=strtol(argv[1],NULL,10);

#pragma omp  parallel num_threads(thread_count)
    hello();
    return 0;
}
void hello(void){
    int my_rank=omp_get_thread_num();
    int thread_count=omp_get_num_threads();
    printf("Hello World from thread %d of %d\n",my_rank,thread_count);
}