#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;
    pq.push(5);
    pq.push(4);
    pq.push(11);
    pq.push(7);
    pq.push(3);
    // in pq it arranges the elemets in a
    cout << "element at top in proority queue " << pq.top() << endl;
    pq.pop(); // pops 3
    cout << "element at back in proority queue " << pq.top();

    return 0;
}