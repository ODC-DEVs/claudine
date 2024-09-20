#include<iostream>
#include<cstdlib>


class Student
{
    public:
        Student(std::string name, std::string last_name, int matricul_number);
        void addScore(double* scores, double score);
        double calculateAverage(double* scores);
        double calculateMedian(double* scores);
        double getHighestScore(double* scores);
        double getLowestScore(double* scores);
        double* sortScore(double* scores);
        bool isAccepted(double average);
        
    private:
        std::string name;
        std::string last_name;
        int matricul_number;
        double* score_vector;
        bool is_accept;
}