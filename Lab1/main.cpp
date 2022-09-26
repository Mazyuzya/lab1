#include <iostream>
#include <string>

int main() {
    //Создаем переменную с типом "строка" для вводимого значения
    std::string command;
    //Создаем переменную с типом "строка" для содержимого цитаты
    std::string bookContent;

    //Бесконечный цикл
    while (true) {
        //Вводим название книги и следом запоминаем его в скрипте
        std::cout << "enter book: ";
        std::cin >> command;
        //проверяем содержимое строки и если совпадает - возвращаем цитаты в завистимости от запроса
        if (command == "sherlock-holmes" or command == "sherlock") {
            bookContent =
                "I had had so many reasons to believe in my friend's subtle powers of \n"
                "reasoning and extraordinary energy in action that I felt that he must \n"
                "have some solid grounds for the assured and easy demeanour with which \n"
                "he treated the singular mystery which he had been called upon to \n"
                "fathom. Once only had I known him to fail, in the case of the King of \n"
                "Bohemia and of the Irene Adler photograph; but when I looked back to \n"
                "the weird business of the Sign of Four, and the extraordinary \n"
                "circumstances connected with the Study in Scarlet, I felt that it would \n"
                "be a strange tangle indeed which he could not unravel. \n";
        } else if (command == "cat-jeoffry" or command == "cat") {
            bookContent =
                "For he is of the tribe of Tiger. \n"
                "For the Cherub Cat is a term of the Angel Tiger. \n"
                "For he has the subtlety and hissing of a serpent, which in goodness he suppresses. \n"
                "For he will not do destruction, if he is well-fed, neither will he spit without provocation. \n"
                "For he purrs in thankfulness, when God tells him he's a good Cat. \n"
                "For he is an instrument for the children to learn benevolence upon. \n"
                "For every house is incomplete without him and a blessing is lacking in the spirit. \n"
                "For the Lord commanded Moses concerning the cats at the departure of the Children of Israel from Egypt. \n"
                "For every family had one cat at least in the bag. \n"
                "For the English Cats are the best in Europe. \n";

        } else if (command == "quet" or command == "exit") {
            return 0;
        }
        //Выводим текст по запросу
        std::cout << bookContent;
        //Обнуляем переменные
        bookContent = "";
        command = "";
    }
    return 0;
}