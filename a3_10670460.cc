/*A cpp code that allows you to input your exams score and output your grade using the University of Ghana grading system using if else */
#include <iostream>

using namespace std;

int main()

{
    int marks;
    cout << "Please enter exams score" << endl;
    cin>>marks;
    if(marks>=80&&marks<=100){
        cout<<" A \n";
    }
    else if (marks>=75&&marks<=79){
        cout<<" B+ \n";
    }
    else if (marks>=70&&marks<=74){
        cout<<" B \n";
    }
    else if (marks>=65&&marks<=69){
        cout<<" C+ \n";
    }
    else if (marks>=60&&marks<=64){
        cout<<" C \n";
    }
    else if (marks>=55&&marks<=59){
        cout<<" D+ \n";
    }
    else if (marks>=50&&marks<=54){
        cout<<" D \n";
    }
    else if (marks>=45&&marks<=49){
        cout<<" E \n";
    }
    else if (marks>=0&&marks<=44){
        cout<<" F \n";
    }
    else {
        cout<<"Try again \n";

    }
    cout<<"THANK YOU";
    return 0;
}
