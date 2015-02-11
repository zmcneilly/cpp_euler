#include <iostream>
#include <string>

// Got the following from: http://en.cppreference.com/w/cpp/algorithm/reverse
template<class BidirIt>
void reverse(BidirIt first, BidirIt last)
{
      while ((first != last) && (first != --last)) {
                std::iter_swap(first++, last);
                    }
}
std::string word_conv(int number) {
/*
 * This function returns the english description of the number based.
 * It does not handle numbers larger than 1000.
 */
  std::string ns = std::to_string(number), result = "";
  unsigned short nl = ns.length();
  std::string nr = ns; 
  reverse(std::begin(nr), std::end(nr));
  if (number == 1000) {
    return "one thousand";
  }
  switch (nr.at(0)) {
    case '1':
      result = "one";
      break;
    case '2':
      result = "two";
      break;
    case '3':
      result = "three";
      break;
    case '4':
      result = "four";
      break;
    case '5':
      result = "five";
      break;
    case '6':
      result = "six";
      break;
    case '7':
      result = "seven";
      break;
    case '8':
      result = "eight";
      break;
    case '9':
      result = "nine";
      break;
  }
  if (nl == 1) { return result; }
  else if (result.length() > 0) { result = "-"+result; }
  switch (nr.at(1)) {
    case '2':
      result = "twenty"+result;
      break;
    case '3':
      result = "thirty"+result;
      break;
    case '4':
      result = "forty"+result;
      break;
    case '5':
      result = "fifty"+result;
      break;
    case '6':
      result = "sixty"+result;
      break;
    case '7':
      result = "seventy"+result;
      break;
    case '8':
      result = "eighty"+result;
      break;
    case '9':
      result = "ninety"+result;
      break;
  }
  if (result.front() == '-') { result = result.substr(1, result.length() - 1); }
  if (nr.at(1) == '1') {
    if (nr.substr(0,2).compare("01") == 0) {
      result = "ten";
    }
    else if (nr.substr(0,2).compare("11") == 0) {
      result = "eleven";
    }
    else if (nr.substr(0,2).compare("21") == 0) {
      result = "twelve";
    }
    else if (nr.substr(0,2).compare("31") == 0) {
      result = "thirteen";
    }
    else if (nr.substr(0,2).compare("41") == 0) {
      result = "fourteen";
    }
    else if (nr.substr(0,2).compare("51") == 0) {
      result = "fifteen";
    }
    else if (nr.substr(0,2).compare("61") == 0) {
      result = "sixteen";
    }
    else if (nr.substr(0,2).compare("71") == 0) {
      result = "seventeen";
    }
    else if (nr.substr(0,2).compare("81") == 0) {
      result = "eighteen";
    }
    else if (nr.substr(0,2).compare("91") == 0) {
      result = "nineteen";
    }
  }
  if (nl == 2) { return result; }
  else if (result.length() > 0) { result = " and "+result; }
  switch (nr.at(2)) {
    case '1':
      result = "one hundred"+result;
      break;
    case '2':
      result = "two hundred"+result;
      break;
    case '3':
      result = "three hundred"+result;
      break;
    case '4':
      result = "four hundred"+result;
      break;
    case '5':
      result = "five hundred"+result;
      break;
    case '6':
      result = "six hundred"+result;
      break;
    case '7':
      result = "seven hundred"+result;
      break;
    case '8':
      result = "eight hundred"+result;
      break;
    case '9':
      result = "nine hundred"+result;
      break;
  }
  return result;
}

void replace_all(std::string * input, std::string original, std::string new_value) {
  while ((*input).find(original) != std::string::npos) {
    (*input).replace((*input).find(original), original.length(), new_value);
  }
}

int main() {
  std::string result = "";
  for (short i = 1; i <= 1000; i++) {
    result += word_conv(i);
  }
  replace_all(&result, " ", "");
  replace_all(&result, "-", "");
  std::cout << result.length() << std::endl;
}
