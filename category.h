#ifndef _CATEGORY_H
#define _CATEGORY_H

#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::cout;
using std::string;

class category{
    public:
        category();
        category(string n, int w);

        string getCategoryName();
        void setCategoryName(string newName);

        int getWeight();
        void setWeight(int newWeight);

        int getPointsGained();
        void setPointsGained(int newNum);

        int getTotalPoints();
        void setTotalPoints(int newNum);

        int getCalcScore();
        void setCalcScore(int newNum);
    private:
        string name;
        int weight;
        int pointsGained;
        int totalPoints;
        int calcScore;
};

#endif