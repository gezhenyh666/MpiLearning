#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  int myid, numprocs;
  MPI_Init(NULL, NULL);
  /*
  初始化MPI环境
  1.根据所有可用的进程（进程数是通过mpi运行时参数指定的）创建通讯器communicator
  2.每个进程会被分配独一无二的rank
  */
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
  /*
  获取所有可以工作的进程数量
  */
  MPI_Comm_rank(MPI_COMM_WORLD, &myid);
  /*
  获取当前进程的秩
  */
  printf("Process %d of %d\n", myid, numprocs);
  MPI_Finalize();
}
