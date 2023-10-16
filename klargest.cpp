#include <queue>
#include <vector>
#include "klargest.h"
using namespace std;

int kth_largest(vector<int> values, int k)
{
    priority_queue<int,vector<int>, less<int>> queue_a;
    for(int i=0; i<values.size(); i++)
    {
        queue_a.push(values.at(i));
    }
    for(int i=0; i<k-1; i++)
    {
        queue_a.pop();
    }
    return queue_a.top();
}