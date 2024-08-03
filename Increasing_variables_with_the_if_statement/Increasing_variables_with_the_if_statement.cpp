#include <iostream>
#include <string>
#include <regex>

//Составить алгоритм увеличения всех трех, введённых с клавиатуры, переменных на 5, если среди них есть хотя бы две равные.
//В противном случае выдать ответ «равных нет».

int inputInt(std::string);

int main()
{
    setlocale(LC_ALL, "ru");
    int a = 0, b = 0, c = 0;
    a = inputInt("Введите 1е число:");
    b = inputInt("Введите 2е число:");
    c = inputInt("Введите 3е число:");

    if (a == b || a == c || b == c) {
        std::cout << "1е число: " << a + 5 << std::endl;
        std::cout << "2е число: " << b + 5 << std::endl;
        std::cout << "3е число: " << c + 5 << std::endl;
    }
    else
    {
        std::cout << "Равных нет\n";
    }
    return 0;
}


int inputInt(std::string textReq = "Enter an integer number") { // textReq текстовый запрос у пользователя
    std::string number;
    std::regex reg("^[0-9]"); //регулярное выражение
    while (true)
    {
        std::cout << textReq << std::endl;
        std::cin >> number;
        if (std::regex_search(number, reg)) {
            return stoi(number); //преобразование string в int. С++ 11
        }
    }
}
