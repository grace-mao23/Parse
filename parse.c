#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args( char * line ) {
  char ** args = malloc(5 * sizeof(char *));
  int i = 0;
  while (line != NULL) {
    args[i] = strsep(&line, " ");
    i++;
    //part = strsep( &line, " ");
  }
  return args;
}

int main() {
  char line[100] = "ls -l -a";
  printf("Parsing: %s\n", line);
  char ** args = parse_args(line);
  execvp(args[0], args);

  // Sample Code
  /*char line[100] = "woah-this-is-cool";
  char *s1 = line;
  printf("[%s]\n", strsep( &s1, "-" ));
  printf("[%s]\n", s1);*/

  return 0;
}
