#include <iostream>
#include <string>


#pragma once

class Human {
private:
    std::string fio;
    int age;
    std::string documents;
public:
    //������������
    Human();

    Human(std::string fio, int age, std::string documents);

    Human(Human& other);

    //���������� ������
    void fill_name(std::string fio, int age, std::string documents);

    //�����������
    void copy_info(const Human& other);

    //����� ������
    void print();

    //���������
    Human operator=(const Human& other);
};



