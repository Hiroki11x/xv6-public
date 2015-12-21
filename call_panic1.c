#include "types.h"
#include "stat.h"
#include "user.h"
int main(void) {
 for(int i =0 ;i<10000;i++)
 	if(fork()>0)
 		break;
 wait();
 exit();
}