#include <stdio.h>
#include "mylib/mylib.h"

int main()
{
  int matrix_input_test_case[3][3] = {
    {1, 2, 3},
    {2, 4, 2},
    {1, 3, 1}
  };

  int vector_input_test_case[3][2] = {
    {0, 0},
    {1, 2},
    {2, 6}
  };

  int vector_expected_test_case[3][2] = {
    {0, 3},
    {1, 2},
    {4, 5}
  };

  int N = 2;
  int T = 3;

  int i;
  for (i = 0; i < T; i++)
  {
    printf("Test #%d:\n", i + 1);
    test_multiply_vector_matrix(
      matrix_input_test_case[i],
      vector_input_test_case[i],
      N,
      vector_expected_test_case[i]
    );
    printf("\n");
  }

  return 0;
}