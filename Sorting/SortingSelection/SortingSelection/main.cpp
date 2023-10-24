#include <iostream>
#include <vector>

using namespace std;

void selectSort(vector<int> &v)
{
   for(int i{}; i < v.size()-1; ++i)
   {
      int indexMin = i;
      for(int j{i+1}; j < v.size(); ++j)
      {
         if(v.at(indexMin) > v.at(j))
            indexMin = j;
      }
      swap(v.at(indexMin), v.at(i));
   }
}

int main()
{
   vector<int> v{6, 8, 1, 5, 4, 9, 23, 0, 21, -1};
   selectSort(v);

   for(auto i : v)
      cout << i << " ";

   cout << endl;
   return 0;
}
