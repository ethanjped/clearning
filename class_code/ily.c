#include <stdio.h>

int main(int argc, char** argv){
  for( int i = 1; i < argc; i++){
    printf("I love you, %s\n", argv[i]);
  }
}
