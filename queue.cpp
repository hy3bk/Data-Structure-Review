#include <iostream>
#include <vector>
using namespace std;

//vector implementation
class queue {
public:
  //constructor
  queue() {
    front = 0;
    size = 0;
  }
  int getSize() {
    return size;
  }
  void enqueue(string x) {
    vec.push_back(x);
    size++; 
  }
  string dequeue() {
    int back = vec.size()-1;
    if(front > back)  
      return "ERROR";     
    string temp = vec[front];
    front++;
    size--;
    return temp;
  }
  
private:
  int front;
  vector<string> vec;
  int size;
  
};

//driver function
int main() {
  queue a;
  a.enqueue("a");
  a.enqueue("b");
  
  cout << a.getSize() << endl;
  cout << a.dequeue() << endl;
  
  cout << a.getSize() << endl;
  cout << a.dequeue() << endl;

  cout << a.getSize() << endl;
  cout << a.dequeue() << endl;

  cout << a.getSize() << endl;
  cout << a.dequeue() << endl;


}
