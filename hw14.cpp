#include <iostream>

int main()
{
  int score[3] ={97, 66, 47};
  int temp;
  
  temp =score[0];
  score[0] = score[2];
  score[2] = temp;
  for (int i=0;i<3;i++) {
      std::cout << score[i] << " ";
  }
  return 0;
}