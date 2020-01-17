#include <stdio.h>
#include <unistd.h>
#include <iostream>

int main() {
  int i;
  if (fork()==0) {
    for(i=1;i<100000;i++){
      std::cout<<"This is child process \n"<<std::endl;
    }
  } else {
    for(i=1;i<100000;i++){
      std::cout<<"This is process process\n"<<std::endl;
    }
  }
  return 0;
}
