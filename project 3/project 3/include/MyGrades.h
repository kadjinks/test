/*
    Authors: Mark Preslar, Phillip Mallone #35,26
    Due Date: 2/23/17
    Programming Assignment: 3
    Spring 2017 - 3358 - Section Number 3

    Instructor: Husain Gholoom
*/

#ifndef MYGRADES_H
#define MYGRADES_H
#include <vector>

class MyGrades {

    vector <double> testGrades;
    vector <double> quizGrades;
    vector <double> hwGrades;

  public:
    void setTest(vector <double> &testGrades);
    void setQuiz(vector <double> &quizGrades);
    void setHW(vector <double> &hwGrades);
    double getTest(vector <double> testGrades);
    double getQuiz(vector <double> quizGrades);
    double getHW(vector <double> hwGrades);
    double getTotal(vector <double> testGrades,vector <double> quizGrades,vector <double> hwGrades);
};

#endif // MYGRADES_H
