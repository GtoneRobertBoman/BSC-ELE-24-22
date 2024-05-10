#include <iostream>
#include <STRING>
using namespace std;


int main()
{
    int number;
    bool fail = true;
    int i=0;
    cout <<"Enter an integer between 5 and 10" <<endl;
    while(fail){
        cin >>number ;

        /// CHECK IF ITS A STRING
        /// IF ITS A STRING OUTPUT INVALID NUMBER
        /// GIVE USER A CHANCE TO INPUT AGAIN (2-i)times OR BREAK

        /// CHECK STRING CODE.
        /// IF ITS A NUMBER
        /// CHECK IF <= 10 OR >=5
        /// IF TRUE PRINT ITS VALID NUMBER AND BREAK
        /// IF FALSE GIVE USER A CHANCE TO INPUT AGAIN (2-i)times OR BREAK
         if (cin.fail()){

             cin.clear ();
             cout << "Invalid number . please enter a number between 5 and 10" << endl;
             cin.ignore();
        }

         else if ( number >= 5 && number <= 10 ){
            cout << "your input value" <<"("<<number<<")"<<" has been accepted ." << endl;
            break;
         }
          else if ( 2 - i > 0  ) {
            cout << " you have entered " << number << ". please a number between 5 and 10. You have " << 2 - i << " attempt(s) left";
            cout << endl;
            }
            else
                break;
                i++;
    }
    return 0;
}
