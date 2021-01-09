#ifndef _COURSE_H
#define _COURSE_H

#include <iostream>
#include <vector>
#include <string>
#include "category.h"

using std::vector;
using std::cout;
using std::string;

class course{
    public:
        string getName();
        void setName(string newName);

        int getNumCategories();
        void setNumCategories(int newNum);

        void createNewCategory();
    private:
        string name;
        int numCategories;
        vector<category> categories;
};

#endif