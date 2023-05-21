#include <iostream>
#include <cmath>

using namespace std;

#define ROWS 5
#define COLS 5

void fill_matrix(int matrix[ROWS][COLS]) {
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      cin >> matrix[i][j];
    }
  }
}

int solve(int matrix[ROWS][COLS]) {
  int row_moves = 0;
  int col_moves = 0;
  int middle_row = (ROWS + 1) / 2;
  int middle_col = (COLS + 1) / 2;

  if (matrix[middle_row - 1][middle_col - 1] == 1) {
    return 0;
  }

  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      if (matrix[i][j] == 1) {
        row_moves += i < middle_row ? abs(middle_row - (i + 1)) : abs((i + 1) - middle_row);
        col_moves += j < middle_col ? abs(middle_col - (j + 1)) : abs((j + 1) - middle_col);
      }
    }
  }

  return row_moves + col_moves;
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int matrix[ROWS][COLS] = {0};

  fill_matrix(matrix);

  cout << solve(matrix);

  return 0;
}