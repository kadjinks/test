/*
    Authors: Mark Preslar, Phillip Mallone #35,26
    Due Date: 2/23/17
    Programming Assignment: 3
    Spring 2017 - 3358 - Section Number 3

    Instructor: Husain Gholoom
*/
#include "MyGrades.h"

void setTest(vector <double> &testGrades){
    double temp=0;
    cout << "Enter test grade: ";
    cin >> temp;
    while(cin.fail()){
        cin.clear();
        cout << endl << "That is not a valid grade."<< endl
        << "Enter test grade: ";
    }
}
void setQuiz(vector <double> &quizGrades){
    double temp=0;
    cout << "Enter quiz grade: ";
    cin >> temp;
    while(cin.fail()){
        cin.clear();
        cout << endl << "That is not a valid grade."<< endl
        << "Enter quiz grade: ";
    }
}
void setHW(vector <double> &hwGrades){
    double temp=0;
    cout << "Enter project grade: ";
    cin >> temp;
    while(cin.fail()){
        cin.clear();
        cout << endl << "That is not a valid grade."<< endl
        << "Enter project grade: ";
    }
}

double getTest(vector <double> testGrades){
    int size = testGrades.size();
    double total = 0;
    if(size == 0){
        cout << "There are no test grades recorded." << endl;
        return 0;
    }
    for(int i = 0; i<size;i++){
        total +=testGrades[i];
        cout <<testGrades[i] << "\t";
    }
    cout << endl;
    return total;
}
double getQuiz(vector <double> quizGrades){
    int size = quizGrades.size();
    double total = 0;
    if(size == 0){
        cout << "There are no quiz grades recorded." << endl;
        return 0;
    }
    for(int i = 0; i<size;i++){
        total +=quizGrades[i];
        cout <<quizGrades[i] << "\t";
    }
    total = total/size;
    cout << endl;
    return total;
}
double getHW(vector <double> hwGrades){
    int size = hwGrades.size();
    double total = 0;
    if(size == 0){
        cout << "There are no project grades recorded." << endl;
        return 0;
    }
    for(int i = 0; i<size;i++){
        total +=hwGrades[i];
        cout <<hwGrades[i] << "\t";
    }
    total = total/size;
    cout << endl;
    return total;
}
double getTotal(vector <double> testGrades,vector <double> quizGrades,vector <double> hwGrades){
    double total = getHW(hwGrades)+getQuiz(quizGrades)+getTest(testGrades);
    return total;
}
