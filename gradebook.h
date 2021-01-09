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

    private:
        int numCourses;
        vector<course> allClasses;

};

gradebook::gradebook(){
    cout << "How many courses?" << endl;
    cin >> numCourses;
    cout << getNumCourses();
}


#endif
