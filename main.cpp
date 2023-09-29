#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> vec= { 11, 22, 33, 44, 55, 66 };

  cout << "The elements are: ";
  for (auto var : vec) {
    cout << var << " ";
  }
  cout << endl;

  return 0;
}
