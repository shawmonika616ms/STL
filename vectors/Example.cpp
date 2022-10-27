//
// Created by shawm on 26-10-2022.
//
#include <iostream>
#include <vector>

using namespace std;

void printVec(vector<int> *t)
{
    t->push_back(66);
}
int main()
{
    vector<int> v1;
    for(int i = 1; i < 5; i ++)
    {
        v1.push_back(i);
    }

    printVec(&v1);
    for(int i =0;i <v1.size();i++)
    {
        cout<<v1[i];
    }


}