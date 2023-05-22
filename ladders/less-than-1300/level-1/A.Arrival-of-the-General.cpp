#include <iostream>

using namespace std;

void swap_left(int arr[], int index) {
  if (index <= 0) {
    return;
  }

  int temp = arr[index];

  arr[index] = arr[index-1];
  arr[index-1] = temp;
}

pair<int, int> max_element(int arr[], int size) {
  int max = arr[0];
  int index = 0;

  for (int i = 1; i < size; ++i) {
    if (arr[i] > max) {
      max = arr[i];
      index = i;
    }
  }

  return { max, index };
}

pair<int, int> min_element(int arr[], int size) {
  int min = arr[0];
  int index = 0;

  for (int i = 1; i < size; ++i) {
    if (arr[i] <= min) {
      min = arr[i];
      index = i;
    }
  }

  return { min, index };
}

int steps_to_put_higher_soldier_in_front(int soldiers[], int n) {
  auto [higher_soldier, higher_soldier_index] = max_element(soldiers, n);
  int steps = 0;

  while (higher_soldier_index) {
    swap_left(soldiers, higher_soldier_index--);
    steps++;
  }
  
  return steps;
}

int steps_to_put_short_soldier_in_back(int soldiers[], int n) {
  auto [_, shorter_soldier_index] = min_element(soldiers, n);
  return n - shorter_soldier_index - 1;
}

/*
 Algorithm

 0) Assign steps to 0.
 1) Find the index of the max element.
 2) Swap left the max element until it becomes the first one.
 3) Find the index of the min element.
 4) Swap right the min element until it becomes the last one.
 5) each swap increments steps by 1;
*/

int solve(int soldiers[], int n) {
  return steps_to_put_higher_soldier_in_front(soldiers, n) + steps_to_put_short_soldier_in_back(soldiers, n);
}

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;

  cin >> n;

  int soldiers[n]= {0};

  for (int i = 0; i < n; ++i) {
    cin >> soldiers[i];
  }

  cout << solve(soldiers, n);

  return 0;
}
