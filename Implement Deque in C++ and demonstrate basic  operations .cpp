#include <iostream> 
#include <deque> 
using namespace std; 
int main() 
{ 
deque<int> dq; 
dq.push_back(10);
 
dq.push_back(20); 
dq.push_front(5); 
cout << "Deque elements: "; 
for (auto x : dq) 
cout << x << " "; 
 
cout << endl; 
cout << "Front element: " << dq.front() << endl; 
cout << "Back element: " << dq.back() << endl; 
dq.pop_front(); 
dq.pop_back(); 
cout << "After deletion, deque elements: "; 
for (auto x : dq) 
cout << x << " "; 
cout << endl; 
return 0; 
} 
