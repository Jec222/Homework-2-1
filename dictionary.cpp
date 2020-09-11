/****
* 
function MinWordLength takes in list of words and how many words it has 

will loop around the dictionary 
will check the size of each word 
if its smaller store the zise
will loop till the end
return smallest zise

function MaxWordLength takes in list of words and the list size 

will loop trough the list 
if flag is smaller than size of word
make flag the new size 
will return flag 

function WordLengthRange takes in list of words and the list size 

will loop trough the list 
will have 2 flags 
one to store the smallest 
one to store the biggest word on list 
will loop trough the list 
will return flag one - flag two

function AverageWordLength takes in list of words and the list size 

will loop trough the list of words 
will add up all the sizes of each word to a flag 
once loop is done 
will return the flag devided by number of words 

function MostCommonWordLength takes in list of words and the list size 

*
*/

#include <string>
using namespace std;

int MinWordLength(string words[], int length) {

  int min_size = 100; 

  for (int k = 0; k < length; k++ ){
    if (words[k].length() < min_size ){
      min_size = words[k].length();
    }
  }
  return min_size;
}

int MaxWordLength(string words[], int length) {

  int max_size = 0;

  for (int k = 0; k < length; k++ ){
    if (words[k].length() > max_size ){
      max_size = words[k].length();
    }
  }
  return max_size;
}

int WordLengthRange(string words[], int length) {
  
  int min_size = 100; 
  int max_size = 0;

  for (int k = 0; k < length; k++ ){
    if (words[k].length() < min_size ){
      min_size = words[k].length();
    }
    if (words[k].length() > max_size ){
      max_size = words[k].length();
    }
  }
  return max_size-min_size;
}

int AverageWordLength(string words[], int length) {
  
  int add_all_lenghts = 0;

  for (int k = 0; k < length; k++ ){
    add_all_lenghts += words[k].length();
  }
  return add_all_lenghts/length;
}

int MostCommonWordLength(string words[], int length) {

  int common_length = 0,
      word_length = 0,
      count_1 = 0; 

  for (int k = 0; k < length; k++ ){
    word_length = words[k].length();
    for (int i = 0; i < length; i++ ){
      if(words[k].length() == words[i].length()){
        if (word_length == words[i].length()){
          count_1++;
          common_length = word_length;
        }
 
      }
    }
  }
  return common_length;
}
