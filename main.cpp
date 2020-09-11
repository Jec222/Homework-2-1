#include <iostream>
#include "search.h"
#include "dictionary.h"
#include "nth_root_finder.h"

using namespace std;

int main() {
  int list[] = {1,2,4,5,6,7,8,9};
  int array_length = 8;
  int number = 7;

  string dictionary_1[] = {"turtle",
                              "Dog",
                             "kiwi",
                          "pokimon",
                             "Door",
                            "House",
                          "glasses",
                           "paper"};

  
  cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  endl;

  cout << "Binar Search: " << BinarySearch(list,array_length,number) <<  endl << endl;



  cout << "the shortest word is " << MinWordLength(dictionary_1,array_length) << endl << "the longest word is " << MaxWordLength(dictionary_1,array_length) << endl << "the range on the words are " << WordLengthRange(dictionary_1,array_length) << endl
  << "Average word length is " << AverageWordLength(dictionary_1,array_length) << endl 
  << "The most common lenght is " <<MostCommonWordLength(dictionary_1,array_length);


cout << endl << endl << FindNthRoot(10,5,6);

}