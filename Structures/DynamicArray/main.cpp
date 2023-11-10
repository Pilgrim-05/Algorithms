#include <iostream>
#include "dynamic_array.h"

using namespace std;

int main()
{
   DArray<int> arr(2);
   cout << "SIZE: " << arr.size() << endl;
   cout << "CAPACITY: " << arr.capacity() << endl;
   arr[0] = 8;
   arr.add(3);
   arr.add(17);
   arr.add(45);

   cout << "SIZE: " << arr.size() << endl;
   cout << "CAPACITY: " << arr.capacity() << endl << endl << endl;

   cout << arr[2] << endl;

   DArray<int> da;
   da = arr;
   cout << "SIZE: " << da.size() << endl;
   cout << "CAPACITY: " << da.capacity() << endl;
   cout << da[0] << endl;

   return 0;
}
