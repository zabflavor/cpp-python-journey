#include<iostream>
#include<fstream>
double toPoint(double score){
    if(score>=90){
        return 4.0;
    }
    else if(score>=85){
        return 3.7;
    }
    else if(score>=82){
        return 3.3;
    }
    else if(score>=78){
        return 3.0;
    }   
    else if(score>=75){
        return 2.7;
    }
    else if(score>=72){
        return 2.3;
    }
    else if(score>=68){
        return 2.0;
    }
    else if(score>=64){
        return 1.5;
    }
    else if(score>=60){
        return 1.0;
    }
    else{
        return 0;
    }
}
using namespace std;
int main(){
    fstream grade;
    grade.open("scores.txt",ios::in);
    double sum=0;
    double totalcredit=0;
    double gpa=0;
    string name;
    double score,credit;
    fstream result;
    result.open("result.txt",ios::out);
    while(grade>>name>>score>>credit){
        sum+=toPoint(score)*credit;
        totalcredit+=credit;
        result<<name<<" "<<credit*toPoint(score)<<endl;
    }
    gpa=sum/totalcredit;
    result<<"GPA= "<<gpa<<endl;
    result.close();
    grade.close();
    return 0;
}
//为什么"用写模式打开文件"会把原来的内容删掉？
//写模式的目的是往文件里放新内容，为此它得先把文件当成一个空的起点——不管原来有没有东西，打开那一刻就被截成 0 长度。