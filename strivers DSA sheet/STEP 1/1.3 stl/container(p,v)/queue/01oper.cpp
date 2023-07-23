#include<bits/stdc++.h>
using namespace std;

int main(){
    //as like stack we can not acces all the elemets  
    // only the elemets at front and back is accessed 
    // i.e pop at front and push at back
    queue<int> q;
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);
    q.push(9);
    q.push(10);
    cout<<q.back()<<endl;
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(7);
    cout<<q.back()<<endl;

    return 0;
}