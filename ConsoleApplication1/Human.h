#include <iostream>
#include <string>


#pragma once

class Human {
private:
    std::string fio;
    int age;
    std::string documents;
public:
    //Конструкторы
    Human();

    Human(std::string fio, int age, std::string documents);

    Human(Human& other);

    //Заполнение данных
    void fill_name(std::string fio, int age, std::string documents);

    //Копирование
    void copy_info(const Human& other);

    //Вывод данных
    void print();

    //Операторы
    Human operator=(const Human& other);
};



