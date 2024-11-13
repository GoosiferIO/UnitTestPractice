#include "Password.h"
#include <string>

using std::string;

/*
  The function receives a string counts how many times the same character 
  occurs at the beginning of the string, before any other characters (or the
  end of the string). The function is case-sensitive so 'Z' is different than
  'z' and any ASCII characters are allowed.
*/
int Password::count_leading_characters(string phrase){
  int repetition = 1;
  int index = 0;
  while( index < phrase.length()-1 && phrase[index] == phrase[index+1] ){
    repetition++;
    index++;
  }
  return repetition;
}

/* Compares two characters if they are ascending */
bool Password::compare_characters(char first, char second){
  return first < second;
}

/* Checks if password is in ascending order */
bool Password::is_ascending(string pass){
  if (pass.length() == 0){
    return true;
  }
  else if (pass.length() == 1){
    return true;
  }
  else{
    for (int i = 0; i < pass.length()-1; i++){
      if (compare_characters(pass[i], pass[i+1]) == false){
        return false;
      }

    }
  }
    return true;
}

/* Checks if the string has a mixed case composition */
bool Password::has_mixed_case(string pass){
  bool hasUpper = false;
  bool hasLower = false;
  for (int i = 0; i < pass.length(); i++){
    if (isupper(pass[i])){
      hasUpper = true;
    }
    if (islower(pass[i])){
      hasLower = true;
    }
  }

  // we want both to be true
  return hasUpper && hasLower;
}