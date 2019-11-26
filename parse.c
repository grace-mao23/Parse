#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ) {
  char ** args;
  int i = 0;
  char *part = strsep( &line, " ");
  while (part != NULL) {
    args[i] = part;
    i++;
    part = strsep( &line, " ");
  }

  return args;
}

int main() {
  char line[100] = "ls -l -a";
  char *s1 = line;
  char ** args = parse_args(s1);
  execvp(args[0], args);

  // Sample Code
  /*char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);*/

  return 0;
}
