#include <iostream>
#include <forward_list>

using namespace std;

int main() {
   forward_list<int> f;

   for(int i = 0; i< 6; i++)
   {
       f.push_front(i);
   }
    for(auto i = f.begin(); i != f.end(); i++)
    {
        cout<<*i;
    }
    forward_list<int>::iterator it;
    it = f.begin();
    advance(it,2);
    cout<<*it;
}
