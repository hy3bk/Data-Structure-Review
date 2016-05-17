#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
using namespace std;


template <class T>
class Queue {
private:
  vector<T> vec;
  int front;
  int size;
public:
  void enqueue(T const&);
  T dequeue();
  int getSize() {
    return size;
  }
};

template <class T>
void Queue<T>::enqueue(T const& elem) {
  vec.push_back(elem);
  size++;
}

template <class T>
T Queue<T>::dequeue() {
  if(size <= 0)
    throw out_of_range("Queue is empty");
  
  string temp = vec[front];
  front++;
  size--;
  return temp;
  
}

//driver function
int main() {
  Queue<string> a;
 
  try {  
  a.enqueue("a");
  a.enqueue("b");
 
  cout << a.getSize() << endl; // 2
  cout << a.dequeue() << endl; // a
  
  cout << a.getSize() << endl; // 1
  cout << a.dequeue() << endl; // b

  a.dequeue(); //throws exception
  

  }
  catch (out_of_range outofrange) {
    cout << outofrange.what() << endl;
    
  }

  
  

  

  

 

  


}
