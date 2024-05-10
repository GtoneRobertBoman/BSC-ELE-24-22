#include <iostream>
using namespace std;

 void swapNumbers( int valueA ,int valueB  )
 {
  cout << " VarA after  swap :" <<  valueA<< endl;
  cout << " varB  after  swap :" <<  valueB<< endl ;
}
int main(){
 // declaring local variables
 
 int varA = 25; 
 int varB = 100;
  
 cout << " VarA before  swap :" << varA << endl;
 cout << " varB before swap :" << varB << endl ;
  cout << endl;
  // swapping using pointers 
 int* valueA= & varB;
 int* valueB = & varA;
 
  //passing values by reference of pointers
 swapNumbers(*valueA, *valueB);
     
    return 0;
}#include <iostream>
using namespace std;

 void swapNumbers( int valueA ,int valueB  )
 {
  cout << " VarA after  swap :" <<  valueA<< endl;
  cout << " varB  after  swap :" <<  valueB<< endl ;
}
int main(){
 // declaring local variables
 
 int varA = 25; 
 int varB = 100;
  
 cout << " VarA before  swap :" << varA << endl;
 cout << " varB before swap :" << varB << endl ;
  cout << endl;
  // swapping using pointers 
 int* valueA= & varB;
 int* valueB = & varA;
 
  //passing values by reference of pointers
 swapNumbers(*valueA, *valueB);
     
    return 0;
}