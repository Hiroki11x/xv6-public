#include "types.h"
#include "stat.h"
#include "user.h"
#define BUFLEN 64

/*
ctrl+Dで実行
*/
int main(int argc, char *argv[]){
 int p[2];
 char *argv2[1];

 strcpy(argv2[0],argv[1]);

 pipe(p);
 close(0);
 dup(p[0]);
 int i;
 for(i=2; i<argc; i++){
 	printf(p[1],"%s\n",argv[i]);
 }
 	
 close(p[0]);
 close(p[1]);
 exec(argv[1],argv2);

 return 0;
}