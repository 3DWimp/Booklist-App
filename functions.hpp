#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
int condition = 0;
int condition2 = 2;
std::vector<std::string> books = {};
void add_book(std::string book) {
	books.push_back(book);
	std::cout << "Added " << book << " to your list! " << "\n";
}
void remove_book(std::string book) {
	books.erase(std::remove(books.begin(), books.end(), book));
	std::cout << "Removed " << book << " from your list. " << "\n";
}
int menu() {
	std::cout << "Which action do you wish to perform? \n";
	std::cout << "1 - Check my book list \n";
	std::cout << "2 - Leave \n";
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1:
		return 0;
		break;
	case 2:
		condition = 1;
		return 0;
		break;
	}
	return 0;
}
int book_list() {
	std::string book_input;
	if (books.size() == 0) {
		std::cout << "You don't have any books yet, consider adding one: ";
		std::cin >> book_input;
		add_book(book_input);
	}
	std::cout << "Your book list: \n" << "\n";
	for (int i = 0; i <= books.size() - 1; i++) {
		std::cout << books[i] << "\n" << "\n";
	}
	int cond = 0;
	while(cond == 0) {
	std::cout << "Which action do you wish to perform? \n";
	std::cout << "1 - Add another book \n";
	std::cout << "2 - Remove a book \n";
	std::cout << "3 - Check my book list \n";
	std::cout << "4 - Go back to the menu \n";
	int choice;
	std::cin >> choice;
	switch (choice) {
	case 1:
		std::cout << "Insert the book title: ";
		std::cin >> book_input;
		add_book(book_input);
		break;
	case 2:
		std::cout << "Which book do you wish to remove? (Insert the book title)" ;
		std::cin >> book_input;
		remove_book(book_input);
		break;
	case 3:
		std::cout << "Your book list: \n \n";
		for (int i = 0; i <= books.size() - 1; i++) {
			std::cout << books[i] << "\n" << "\n";
	}
	break;
	case 4:
		cond = 1;
		return 0;
		break;
	}
}
	return 0;
}
