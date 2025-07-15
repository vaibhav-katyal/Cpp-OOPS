#include<iostream>
using namespace std;

class GradeCalculator{
public:
    int m1,m2,m3,m4,m5;

    int total(int m1,int m2,int m3,int m4,int m5){
        return m1+m2+m3+m4+m5;
    }

    double average(int m1,int m2,int m3,int m4,int m5){
        return (double) total(m1,m2,m3,m4,m5)/5.0;
    }

    char grade(int m1,int m2,int m3,int m4,int m5){
        double avg = average(m1,m2,m3,m4,m5);

        if(avg >= 90 && avg <=100) return 'A';
        else if(avg >= 80 && avg <=89) return 'B';
        else if(avg >= 70 && avg <=79) return 'C';
        else if(avg >= 60 && avg <=69) return 'D';
        else if(avg <60) return 'F';
    }
};

int main(){

    GradeCalculator g;
    int m1,m2,m3,m4,m5;
    cout << "Enter marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    cout << "Total: " << g.total(m1,m2,m3,m4,m5) << endl;
    cout << "Average: " << g.average(m1,m2,m3,m4,m5) << endl;
    cout << "Grade: " << g.grade(m1,m2,m3,m4,m5);

    return 0;
}