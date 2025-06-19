#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    int result = getrlimit(RLIMIT_STACK,&lim);
    if(result == 0){
      if(lim.rlim_cur == RLIM_INFINITY){
        printf("stack size(soft): INFINITY\n");
      }
      else{
        printf("stack size(soft): %ld\n", lim.rlim_cur);
      }
    }
    result = getrlimit(RLIMIT_NPROC,&lim);
    if(result == 0){
      if(lim.rlim_cur == RLIM_INFINITY){
        printf("process limit(sof): INFINITY\n");
      }
      else{
        printf("process limit(sof): %ld\n", lim.rlim_cur);
      }
    }
    result = getrlimit(RLIMIT_NOFILE,&lim);
    if(result == 0){
      if(lim.rlim_cur == RLIM_INFINITY){
        printf("max file descriptors(soft): INFINITY\n");
      }
      else{
      printf("max file descriptors(soft): %ld\n", lim.rlim_cur);
      }
    }
    return 0;
}
