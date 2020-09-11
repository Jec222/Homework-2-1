/****
* funtion will take in a number the root and the precition

will loop and deviding number by 2
will loop again and set a flag if the flag and 
the number match it will set its precition 
and will convert it into a string and return
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

string FindNthRoot(int number, int root, int precision) {

  double temp=1;

  for (int k = 2; k <=number/2;k++){
    for (int i = 1; i <=root;i++){
      temp*=k;
    }
    if(temp == number){
      cout << fixed << setprecision(precision) << k;return to_string (k);
    }
  }
  return "";
}
