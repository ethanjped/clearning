#include <stdio.h>

int main(int argc, char** argv){
  printf("%p\n", argv);
  for(int i = 0; i < argc; i++){
    printf("arg %d %p\t%s\n", i, argv[i], argv[i]);
  }

  printf("%p\n", argv[argc+1]);
      
}
