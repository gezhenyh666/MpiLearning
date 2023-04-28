#include "mpi.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
  int myid, numprocs;
  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
  MPI_Comm_rank(MPI_COMM_WORLD, &myid);
  printf("Process %d of %d\n", myid, numprocs);
  MPI_Finalize();
}
