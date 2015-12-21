//iallocのpanic
#include "types.h"
#include "stat.h"
#include "user.h"
#include "fs.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
  int fd, i;
  char path[] = "stressfs0";
  for(i = 0; i < 4000; i++){
	printf(1, "write %d\n", i);
	path[8] += i;
  	fd = open(path, O_CREATE | O_RDWR);
  	close(fd);
	}
  exit();
}
