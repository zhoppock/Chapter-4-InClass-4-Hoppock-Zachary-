// Hoppock, Zachary
// nestedLoop.cpp
// 10/8/2020
// Program will do a nested loop on how many numbers the variables "i" and "j" are.
// Version # 1
#include <iostream>
using namespace std;

int main()
{ 
  for (int i = 0; i <= 1; i++)
    for (int j = 0; j <= 1; j++)
      for (int k = 0; k <= 1; k++)
        cout << "i = " << i << " and j = " << j << " and k = " << k << endl;
  return 0;
}