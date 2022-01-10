#include <iostream>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages;

        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main()
{
    string userTitle;
    string userAuthor;
    int userPages;
    
    Book myBook("Count of Monte Cristo", "Alexandre Dumas", 1276);

    cout << "What's your favorite book's title? ";
    cin >> userTitle;

    cout << "Who wrote the book? ";
    cin >> userAuthor;

    cout << "How many pages does it have? ";
    cin >> userPages;

    Book userBook(userTitle, userAuthor, userPages);

    cout << "Your favorite book is " << userBook.title << ". It was written by " << userBook.author << " and it is " << userBook.pages << " pages long." << endl;

    cout << "My favorite book is " << myBook.title << ". It was written by " << myBook.author << " and it is " << myBook.pages << " pages long." << endl;

    system("pause");
    return 0;
}