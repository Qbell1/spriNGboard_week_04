#include <iostream>
#include <vector>

using namespace std;

 int main ()
{
   // vector<int> v{10,5};     // Displays '10 5' because a vector is cretaed
   // vector<int> v = {10,5};      // Displays '10 5' because a vector is cretaed
  //  vector<int> v(10,5);     // Displays '5', 10 times. 10 is the maximum # of values while 5 is the actual item.
   vector<int> v = (10,5);      // Does not return because of the comma operator.

  for (auto& elem : v) {
    cout << elem << " ";
  }
  cout << endl;

  return 0;
}

