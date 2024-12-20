#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

  // initialize vector of integers
  vector<int> nums = {1, 2, 3, 4, 5, 8, 10, 12};
  
  int even_count = count_if(nums.begin(), nums.end(), [](int num) { return num / 2 != 0; });

  cout << even_count << endl;

  return 0;
}