#include <iostream>
#include <vector>
using namespace std;
int main() {
  vector<int> v;
  vector<int> myvector = {2, 3, 4, 7, 8};
  cout << "printing a vector..." << endl;
  for (int i = 0; i < myvector.size(); i++) {
    cout << myvector[i] << " ";
  }
  cout << endl;
  vector<int> a(5, 1); // size of vector will be 5. All five elements have the
                       // same value that is 1.
  cout << "Printing a vector" << endl;
  for (int i : a) {
    cout << i << " ";
  }
  cout << endl;
  // Copying a vector into another vector.
  cout << "Printing last vector" << endl;
  vector<int> last(a);
  for (int i : last) {
    cout << i << " ";
  }
  cout << endl;
  cout << "Capacity " << v.capacity(); // 0
  v.push_back(1);
  cout << "\nCapacity " << v.capacity(); // 1
  v.push_back(2);
  cout << "\nCapacity " << v.capacity(); // 2
  v.push_back(3);
  cout << "\nCapacity " << v.capacity(); // 4
  cout << "\nSize " << v.size()<< endl; // Number of elements present in the array.
  // VECTOR KEEPS ON INCREASING ITS SIZE THE DOUBLE AS IT IS DYNAMIC IN NATURE

  cout << "element at second index is " << v.at(2) << endl;

  cout << "front " << v.front() << endl;
  cout << "back " << v.back() << endl;

  cout << "before pop" << endl;
  for (int i : v) {
    cout << i << " ";
  }
  cout << endl;

  v.pop_back();
  cout << "After pop";
  for (int i : v) {
    cout << " " << i << " ";
  }

  cout << "\nBefore clear size " << v.size() << endl;
  v.clear();
  cout << "after clear size " << v.size();
}
