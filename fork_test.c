#include "types.h"
#include "stat.h"
#include "user.h"
int main (void) {
 int p[2];
char *argv[2] = { "wc", 0 };
pipe(p); // パイプ作成
if (fork() == 0) { // 子プロセス
 close(0); // 標準入力をクローズ
 dup(p[0]); // p[0]が標準入力となる
 close(p[0]);
 close(p[1]);
 exec("/wc", argv); // wcコマンドを実行
}
else {
 write(p[1], "Hello, World\n", 13);
 close(p[0]);
 close(p[1]); 
}
}