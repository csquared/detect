#include <stdio.h>
#include <dirent.h>
#include <strings.h>
#include <sys/types.h>

// global var!
char * basedir = ".";

int find_in_dir(char *name){
  int len  = strlen(name);
  DIR *dirp = opendir(basedir);
  struct dirent *dp;

  while((dp = readdir(dirp)) != NULL)
    if(dp->d_namlen == len && !strcasecmp(dp->d_name, name)){
      (void)closedir(dirp);
      return 1;
    }
  (void)closedir(dirp);
  return 0;
}

int main(int argc, char *argv[])
{
  if(argc == 2) basedir = argv[1];

  if(find_in_dir("package.json")) puts("node.js");
  if(find_in_dir("Gemfile")) puts("ruby");
  if(find_in_dir("Makefile")) puts("c");
  if(find_in_dir("project.clj")) puts("clojure");
  if(find_in_dir("pom.xml")) puts("java");
  if(find_in_dir("setup.py") || find_in_dir("requirements.txt"))
    puts("python");
  return 0;
}
