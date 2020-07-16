// constructor (function)

#include <iostream>
using namespace std;

class Book {
  public: 
      string title;
      string author;
      int pages;
      // Constructor Function

      Book() {
        title = "no Title";
        author = "no author";
        pages = 0;
      }

      Book(string aTitle, string aAuthor, int aPages){
        title = aTitle;
        author = aAuthor;
        pages = aPages;
      }
};


int main() {
  Book book1("Harry Potter", "JK Rowling", 500);
  Book book3;
  cout << book3.author << endl;


  return 0;
}