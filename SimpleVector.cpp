#include <vector>
#include <iostream>
#include <algorithm>

int main(){
  
  int n, i;
  std::cin >> n;
    
  std::vector<int> numbers(n, 0);
  for(int i = 0; i < n; i ++){
    std::cin >> numbers[i];
  }
  sort(numbers.begin(), numbers.end());
    
  for(int i = 0; i < n; i++){
    std::cout << numbers[i] << " ";
  }
     
  return 0;
  
}
