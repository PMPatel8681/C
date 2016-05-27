//--------------------------------------------------------------------
//
//  Project 1                                               phase1.cpp
//
//  Initial test program for the operations in the simple list.
//
//--------------------------------------------------------------------

#include <iostream>
#include "simpList.h"


void main()
{
  SimpList<int> intList;   // (empty) list of integers

  intList.print();

  cout << "test1" << endl;

  int intData[] = { 5, 3, -2, 7, 9, -8, 1, -4 };

  cout << "test2" << endl;
  

  for (int i = 0; i < 8; i++){
	  
	  intList.insert(intData[i]);
	  cout << "test3" << endl;
  }

  
  cout << "test4" << endl;

  intList.print();
  cout << "List size: " << intList.size() << endl;

  cout << "test5" << endl;
 
//  intList.clear();
  intList.print();

  cout << "test6" << endl;

  if (intList.isEmpty())
  {
	  cout << "List is really empty!" << endl;
  }

  cout << "test7" << endl;
  
  int t = 11;
  bool search = intList.find(t);

  int seven = -4;

  intList.remove(seven);
  intList.print();

  cout << "test8" << endl;

  if (search) { cout << "Found " << t << endl; }
  else { cout << t << " not found" << endl; }

  cout << "test9" << endl;

}
