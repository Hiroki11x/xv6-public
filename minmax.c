#include "types.h"
#include "stat.h"
#include "user.h"
#define BUFLEN 64

/*
ctrl+Dで実行
*/
int main() {
 char buf[BUFLEN];
 int max = 0, min = 2147483647;
 gets(buf, BUFLEN);
 while (strlen(buf) > 0) {
 	int a = atoi(buf);
 	min = a < min ? a : min;
 	max = a > max ? a : max;
 	gets(buf, BUFLEN);
 }
 printf(1, "min=%d, max=%d\n", min, max);
 exit();
}