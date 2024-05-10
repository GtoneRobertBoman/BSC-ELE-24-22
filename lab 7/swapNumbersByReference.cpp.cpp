#include <iostream>
using namespace std;

 void swapNumbers( int& varA, int &varB){
  cout << " VarA after  swap :" <<  varA<< endl;
 cout << " varB  after  swap :" <<  varB<< endl ;

}
int main(){
 int varA = 25; 
 int varB = 100;
  
 cout << " VarA before  swap :" << varA << endl;
 cout << " varB before swap :" << varB << endl ;
   cout << endl;
 swapNumbers(varB, varA);
     
    return 0;