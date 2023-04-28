#include <mpi.h>

int main(int argc, char *argv[])
{ 
  int rank, numprocs;

  MPI_Init(&argc, &argv);

  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
  MPI_Comm_rank(MPI_COMM_WORLD, &rank);
  //int value = 0;
  int value;
  if (rank == 0) {
    value = 1;
  }
  MPI_Bcast(&value, 1, MPI_INT, 0, MPI_COMM_WORLD);
  printf("Process %d got %d\n", rank, value);
  MPI_Finalize();
  return 0;
}
