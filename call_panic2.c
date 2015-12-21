
//ballocのpanic
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int fd, i, j;
  char path[] = "stressfs0";
  char data[2048];
  for(i = 0; i < 1000; i++){
	printf(1, "write %d\n", i);
	path[8] += i;
  	fd = open(path, O_CREATE | O_RDWR);
  	for(j = 0; j < 10000; j++){
  		write(fd, data, sizeof(data));
  	}
  	close(fd);
	}
  exit();
}
