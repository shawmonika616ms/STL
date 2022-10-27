#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l;
    for(int i = 0; i < 5; i++)
    {
        l.push_front(i);
    }

    l.push_back(99);
    for(auto i = l.begin(); i != l.end(); i++)
    {
        cout<<*i;
    }

    list<int>::iterator it;
    it = l.begin();

    advance(it,5);
    cout<<*it;


}
