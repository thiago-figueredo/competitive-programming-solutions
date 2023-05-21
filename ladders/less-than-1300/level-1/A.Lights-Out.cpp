#include <iostream>

using namespace std;

#define ROWS 3
#define COLS 3

void read_input(int grid[ROWS][COLS]) {
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      cin >> grid[i][j];
    }
  }
}

void print_grid(int grid[ROWS][COLS]) {
  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      cout << grid[i][j];
    }

    cout << "\n";
  }
}

inline void toggle_at(int grid[ROWS][COLS], int row, int col, int toggles) {
  grid[row][col] = toggles % 2 ? !grid[row][col] : grid[row][col];
}

void toggle_lights(int grid[ROWS][COLS], int row, int col, int toggles) {
  toggle_at(grid, row, col, toggles);

  if (col + 1 < COLS) {
    toggle_at(grid, row, col + 1, toggles);
  }

  if (col - 1 >= 0) {
    toggle_at(grid, row, col - 1, toggles);
  }

  if (row + 1 < ROWS) {
    toggle_at(grid, row + 1, col, toggles);
  } 
  
  if (row - 1 >= 0) {
    toggle_at(grid, row - 1, col, toggles);
  }
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int grid_state[ROWS][COLS];
  int grid[ROWS][COLS] = {
    { 1, 1, 1 },
    { 1, 1, 1 },
    { 1, 1, 1 },
  };

  read_input(grid_state);

  for (int i = 0; i < ROWS; ++i) {
    for (int j = 0; j < COLS; ++j) {
      int toggles = grid_state[i][j];

      if (toggles > 0) {
        toggle_lights(grid, i, j, toggles);
      }
    }
  }

  print_grid(grid);

  return 0;
}
