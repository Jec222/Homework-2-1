/****
linear search will take in the list the length and the taget 
will go though the data starting from the beggining
will keep going until target it found
once target is found return pos 
if nothing found will return -1

Binary Search will take in a list length and target 

will loop until it finds the desiered element 
left and right will help split the data accordetly 
if target it found return position
check is target is on left side or right 
change values if its on left make mid new right
if target on right side mid is new left 

*/
int LinearSearch(int numbers[], int length, int target) {
  for (int pos = 0; pos < length; pos++) {
    if (numbers[pos] == target) 
      return pos; 
  }
  return -1;
}

int BinarySearch(int numbers[], int length, int target) {

  int left = 0,
  right = length;

  while (left <=right){
    int mid = left+((right-left)/2);

    if (numbers[mid] == target)
      return mid;

    else if (target < numbers[mid])
      right = mid-1;
  
    else 
      left = mid+1;
  }
  return -1;
}
