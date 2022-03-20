#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Page.hpp"
#include "Direction.hpp"
using namespace std;

namespace ariel { 
    class Notebook
    {
    private:
        vector<Page> pages;

    public:
        void write(unsigned int page, unsigned int row, unsigned int column, Direction d, string const &str); // col<100 and if direction horizontal str.size<100-column

        string read(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int num_to_read);

        void erase(unsigned int page, unsigned int row, unsigned int column, Direction d, unsigned int num_to_erase);

        void show(unsigned int page_num);
        // void printStudent() const {
        // 	//this->_id = "12"";"
        // 	cout << "*****************************************" << endl;
        // 	cout << this->getId() << endl;
        // 	cout << "Student's name : " << _name << endl;
        // 	cout << "Studnet's id : " << _id << endl;
        // 	cout << "Student's grade : " << _grade << endl;
        // 	cout << "*****************************************" << endl;
        // }
        // void setId(string id="123123123");

        // string getName() const;

        // Notebook();
        // Notebook(Notebook & other);
        // Notebook(string id, string name, int grade) :_id(id), _name(name), _grade(grade) {}
        // Notebook(string id) :_id(id) { this->setName("Roy"); this->setGrade(80); }
        // ~Notebook() {
        // 	cout << "Student is destroyed" << endl;
        // }
    };
};