#include <iostream>
#include <string>
#include <vector>
#include <limits>

#ifdef _WIN32
#include <windows.h>
#endif

using namespace std;

class Book {
public:
    string title;
    string author;
    bool isIssued = false;

    Book(const string& title, const string& author) : title(title), author(author) {}
};

int findBook(const vector<Book>& books, const string& title) {
    for (int i = 0; i < (int)books.size(); i++) {
        if (books[i].title == title) {
            return i;
        }
    }
    return -1;
}

string status(const Book& book) {
    return book.isIssued ? "[ВЫДАНА]" : "[В БИБЛИОТЕКЕ]";
}

string askTitle() {
    string title;
    cout << "Введите название книги: ";
    getline(cin, title);
    return title;
}

int main() {
#ifdef _WIN32
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
#endif

    vector<Book> books;

    while (true) {
        cout << "\n===== БИБЛИОТЕКА =====\n";
        cout << "1. Показать все книги\n";
        cout << "2. Добавить книгу\n";
        cout << "3. Выдать книгу (получил)\n";
        cout << "4. Принять книгу (вернул)\n";
        cout << "5. Найти книгу\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";

        int choice;
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Ошибка: введите номер пункта меню.\n";
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (choice) {
        case 1: {
            if (books.empty()) {
                cout << "У вас нет книг\n";
                break;
            }
            for (int i = 0; i < (int)books.size(); i++) {
                cout << i + 1 << ". " << books[i].title << " - " << books[i].author
                     << " " << status(books[i]) << "\n";
            }
            break;
        }
        case 2: {
            string title, author;
            cout << "Введите название книги: ";
            getline(cin, title);
            cout << "Введите автора книги: ";
            getline(cin, author);
            books.push_back(Book(title, author));
            cout << "Книга добавлена\n";
            break;
        }
        case 3: {
            int index = findBook(books, askTitle());
            if (index == -1) {
                cout << "Книга не найдена\n";
            } else if (books[index].isIssued) {
                cout << "Ошибка: эта книга уже выдана\n";
            } else {
                books[index].isIssued = true;
                cout << "Вы получили книгу\n";
            }
            break;
        }
        case 4: {
            int index = findBook(books, askTitle());
            if (index == -1) {
                cout << "Книга не найдена\n";
            } else if (!books[index].isIssued) {
                cout << "Ошибка: эта книга не выдана, она уже в библиотеке\n";
            } else {
                books[index].isIssued = false;
                cout << "Вы вернули книгу\n";
            }
            break;
        }
        case 5: {
            int index = findBook(books, askTitle());
            if (index == -1) {
                cout << "Книга не найдена\n";
            } else {
                cout << "Название: " << books[index].title << "\n";
                cout << "Автор: " << books[index].author << "\n";
                cout << "Статус: " << status(books[index]) << "\n";
            }
            break;
        }
        case 0:
            cout << "До свидания!\n";
            return 0;
        default:
            cout << "Ошибка: такого пункта нет\n";
            break;
        }
    }
}
