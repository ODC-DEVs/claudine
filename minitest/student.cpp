#include "Student.hpp"

Student::Student(std::string name, std::string last_name, int matricul_number):name(name), last_name(last_name), matricul_number(matricul_number){}

 void addScore(double* scores, double score){
        size_t length = sizeof(scores);
        scores = (double*)realloc(scores, length++);
        scores[length-1] = score;
  }
       
 double calculateAverage(double* scores ){
    double sum = 0;
    int length = sizeof(scores);
    for(int i = 0; i < length;i++){
        sum += scores[i];
    }
    return sum / length;

 }
        double calculateMedian(double* scores ){
                    /*formule oubliée*/
        }



        double getHighestScore(double* scores ){
            double max = scores[0];
            int length = sizeof(scores);
            for(int i = 1; i < length; i++){
                if(scores[i] > max)
                    max = scores[i];
            }
            return max;
        }


        double getLowestScore(double* scores ){
            double min = scores[0];
            int length = sizeof(scores);
            for(int i = 1; i < length; i++){
                if(scores[i] < min)
                    min = scores[i];
            }
            return min;
        }


        double* sortScore(double* scores){
            int length = sizeof(scores);
            for(int i = 0; i < length - 1; i++){
                for(int j = 0; j < length - i - 1; j++){
                    if(scores[j] > scores[j+1]){
                        double temp = scores[j];
                        scores[j] = scores[j+1];
                        scores[j+1] = temp;
                    }
                }
            }
            return scores;

        }

        bool isAccepted(double average){
            return average >= 11.5;
        }