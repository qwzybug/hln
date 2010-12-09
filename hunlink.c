/*
 * From StackOverflow http://stackoverflow.com/questions/1432540
 * (specifically, http://stackoverflow.com/questions/1432540/creating-directory-hard-links-in-macos-x/2440126#2440126)
 */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char* argv[]) {
 if (argc != 2) {
  fprintf(stderr,"Use: hunlink <dir>\n");
  return 1;
 }
 int ret = unlink(argv[1]);
 if (ret != 0)
  perror("unlink");
 return ret;
}