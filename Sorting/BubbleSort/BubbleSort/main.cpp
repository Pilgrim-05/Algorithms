#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(vector<int> &v)
{
   if(v.empty()) return;
   int finish = v.size();

   while(finish--){
      bool flag = true;

      for(int i{}; i < finish; ++i)
      {
         if(v.at(i) > v.at(i+1)){
            swap(v.at(i), v.at(i+1));
            flag = false;
         }
      }
      if(flag) break;
   }

}

int main()
{
   vector<int> v{3, 1, 56, 32, 8, 17, 9, 0, 21, -1};
   bubbleSort(v);

   for(auto i: v)
      cout << i << " ";
}
