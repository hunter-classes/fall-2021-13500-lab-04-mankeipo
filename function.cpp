#include <iostream>
using namespace std;

//box
string box(int width, int height) {
  string box;
  for(int i = 0; i < height; i++) {
    for(int j = 0; j < width; j++) {
      box += "*";
    }
    box += "\n";
  }
  return box;
}

//checkerbroad
string checkerbroad(int width, int height) {
  bool swap = false;
  string box;
  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      swap = !swap;
      if(swap) {
          box += "*";
        } else {
          box += " ";
        }
      }
      box += "\n";
    }	
  return box;
}

//cross
string cross(int size) {
  string box;
  int star1 = 0;
  int star2 = size;
  for(int j = 0; j < size; j++) {
    for(int i = 0; i < size; i++) {
      if(i == star1 || i == star2 -1 ) {
        box += "*";
      } else {
        box += " ";
      }
    }
    box += "\n";
    star1++;
    star2--;
  }
  return box;
}

//lower triangle
string lowerTriangle(int size){
  string box;
  int length = 1;
  for(int i = 0; i < size; i++) {
    for(int j = 0; j < length; j++) {
      box += "*";
    }
    length++;
    box += "\n";
  }
  return box;
}

//upper triangle
string upperTriangle(int size){
  string box;
  int length = size;
  int space = 0;
  for(int i = 0; i < size; i++) {
    for(int k = 0; k < space; k++){
      box += " ";
    }
    for(int j = length; j > 0; j--) {
      box += "*";
    }
    length--;
    space++;
    box += "\n";
  }
  return box;
}

//Upside-down trapezoid or triangle
string upsideDown(int width, int height) {
  string box;
  int space = 0;
  if(width - height * 2 < 0) {
    box += "\nImpossible shape!\n";
  } else {
    for(int i = 0; i < height; i++) {
      for(int k = 0; k < space; k++) {
        box += " ";
      }
      for(int j = 0; j < width; j++) {
        box += "*";
      }
      for(int k = 0; k < space; k++) {
        box += " ";
      }
      space ++;
      width -= 2;
      box += "\n";
    }
  }
  return box;
}

//checkerbroad(3x3)
string checkerbroad3(int width, int height) {
  string box;
  int lineCount1 = 2;
  int lineCount2 = 5;
  bool line = true;
  for(int j = 0; j < height; j++){
      if(j > lineCount1) {
        line = !line;
        lineCount1 += 3;
      }
      if(line) {
        int x = 2;
        bool swap = true;
        for(int i = 0; i < width; i++) {
          if (i > x) {
            swap = !swap;
            x += 3;
          } 
          if(swap) {
            box += "*";
          } else {
            box += " ";
          }
        }
      } else{
          int x = 2;
          bool swap = false;
          for(int i = 0; i < width; i++) {
            if (i > x) {
              swap = !swap;
              x += 3;
            }
            if(swap) {
              box += "*";
            } else {
              box += " ";
            }
          }
      }
      box += "\n";
  }
  return box;
}











