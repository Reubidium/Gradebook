#ifndef _GRADEBOOK_H
#define _GRADEBOOK_H

#include <iostream>
#include <vector>
#include "course.h"

using std::vector;
using namespace std;

class gradebook{
    public:
        gradebook();
        int getNumCourses() {return numCourses;}
        void setNumCourses(int newNum);
        void addCourses(int num);

    private:
        int numCourses;
        vector<course> allClasses;

};

gradebook::gradebook(){
    cout << "How many courses?" << endl;
    cin >> numCourses;
    addCourses(numCourses);
}

void gradebook::addCourses(int num){
    string name;
    int numCategories;
    for (int i = 0; i < num; i++){
        cout << i+1 << " course:" << endl;
        cout << "What is the name of course?" << endl;
        cin >> name;
        cout << "How many categories?" << endl;
        cin >> numCategories;

        allClasses.push_back(course(name, numCategories));
    }
}

#endif
