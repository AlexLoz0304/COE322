/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-2023 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** link.cxx : linked list using shared smart pointers
 ****
 ****************************************************************/

#include <cmath>

#include <iostream>
using std::cin;
using std::cout;

#include <memory>
using std::make_shared;
using std::shared_ptr;

#include <vector>
using std::vector;

#include <cassert>

class Node; // forward definition
class List {
private:
  shared_ptr<Node> head{nullptr};
public:
  List() {};
  auto headnode() { return head; };
  void insert(int value);
  int length();
  int length_iterative();
  bool contains_value(int v);
  void print();
};

class Node {
private:
  int datavalue{0},datacount{0};
  shared_ptr<Node> next{nullptr};
public:
  Node() {};
  Node(int value,shared_ptr<Node> next=nullptr)
    : datavalue(value),datacount(1),next(next) {};
  int value() {
    return datavalue; };
  auto nextnode() {
    return next; };
  int length();
  int count() {
    return datacount; };
  bool has_next() {
    return next!=nullptr; };
  void insert(int value);
  void print();
  bool contains_value(int v);
};

int main() {

  List mylist;
  int number;
  cout << "Please enter numbers into a sorted list, type a number you want to enter then press enter, keep typing until you are done. Type 0 to end" << "\n";
  while (true) {
    cin >> number;
    if (number == 0)
      break;
    else
      mylist.insert(number);
  }
  mylist.print();
  return 0;
}

/*
 * Compute the length of a list recursively
 * See below for an iterative solution
 */
void List::insert(int value){
  if (head==nullptr)
    head = make_shared<Node>(value);    
  else
    head->insert(value);
};

void Node::insert(int value){
  if (datavalue == value)
    datacount += 1;
  else if (value < datavalue){
    int oldvalue = datavalue;
    int oldcount = datacount;
    datavalue = value;
    datacount = 1;
    for (int i = 1; i <= oldcount; i++){
      if (next==nullptr)
	next = make_shared<Node>(oldvalue);
      else
	next->insert(oldvalue);
      }
    }
  else if (next==nullptr)
    next = make_shared<Node>(value);
  else
    next->insert(value);
};

bool List::contains_value(int v) {
  if (head==nullptr)
    return false;
  else
    return head->contains_value(v);
};

bool Node::contains_value(int v) {
  if (datavalue == v)
    return true;
  else if (next==nullptr)
      return false;
  else
      return next->contains_value(v);
};

int List::length() {
  int count = 0;
  if (head==nullptr)
    return 0;
  else
    return head->length();
};

int Node::length() {
  if (!has_next())
    return 1;
  else
    return 1+next->length();
};

/*
 * Iterative alternative
 * to recursive computation
 */
int List::length_iterative() {
  int count = 0;
  if (head!=nullptr) {
    auto current_node = head;
    while (current_node->has_next()) {
      current_node = current_node->nextnode(); count += 1;
    }
  }
  return count;
};

/*
 * Auxiliary functions
 */
void Node::print() {
  cout << datavalue << ":" << datacount;
  if (has_next()) {
    cout << ", "; next->print();
  }
};

void List::print() {
  cout << "List:";
  if (head!=nullptr)
    cout << " => "; head->print();
  cout << '\n';
};


