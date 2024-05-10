#include <iostream>
#include <fstream>
#include <sstream>
#include <string >
#include <algorithm>

using namespace std;
int vowels( const string& reb){
  int count=0;
  for(char m :reb) {
      if (string ("aeiouAEIOU") . find(m) != string::npos){
        count ++;
      }
 }
return count;
}
   string reverses (const string &reb ){
   string rev = reb;
   reverse(rev.begin(),rev.end());
   return rev;
  }
  int countWords( const string & fileData){

    int count =0;
    istringstream gtone(fileData);
    string word;
    for( count=0;  gtone>> word ;count++)
        cout << "the number of words is  :" << count <<endl;
        return count ;
  }
  string captalizingSecondLetter(const string& fileData) {
     string output = fileData;
     for (size_t k= 0; k < output.length() ;k++){
        if (k ==0 || output[k-1] == ' '){
            output[k] = toupper(output[k]);
        cout <<" the capitalized vowels are : " << output<< endl;
        }

     }
}
/// CREAT THE FILE
string fileData(string &file ,string &data ){
    ofstream outputFile (file, ios_base::app);
    string fileData = "  this is advanced computer programming";
    outputFile<< data;
    outputFile.close();
    return fileData;
}
int main(){

    ifstream inputfile("textfile.txt");
    if (!inputfile .is_open()){
    cout << " fail to open the file." << endl;
    return 3 ;
  }
 return 0;
}
