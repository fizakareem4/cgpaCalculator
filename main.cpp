#include<iostream>
#include<string>
using namespace std;
class gpa {
private:
    int n;
public:
    void input() {
        cout<<"==========GPA CALCULATOR========="<<endl;
        string  course[50];
        cout<<"=========NUMBER OF COURSES========"<<endl;
        cout<<"Enter number of courses:"<<endl;
        cin>>n;
        cout<<"=========COURSES NAMES=========="<<endl;
        for(int i=0; i<n; i++) {
            cout<<"Enter courses name:"<<endl;
            cin>>course[i];
        }
        int totalcredits=0;
        int credit[50];
        cout<<"============CREDIT HOURS============"<<endl;
        for(int i=0; i<n; i++) {
            cout<<"Enter credit hours:"<<endl;
            cin>>credit[i];
            totalcredits+=credit[i];
        }
        float totalgradenumbers=0.0;
        float gradenumber;
        string grade[50];
        cout<<"==========GRADE=========="<<endl;
        for(int i=0; i<n; i++) {
            cout<<"Enter your grade:"<<endl;
            cin>>grade[i];
            if(grade[i]=="A" || grade[i]=="B" || grade[i]=="a" || grade[i]=="b" || grade[i]=="C" || grade[i]=="D" || grade[i]=="c" || grade[i]=="d") {
                cout<<"Pass"<<endl;
            } else {
                cout<<"Fail"<<endl;
            }
            if(grade[i]=="A" || grade[i]=="a") {
                gradenumber=4.00;
            } else if(grade[i]=="B" || grade[i]=="b") {
                gradenumber=3.50;
            } else if(grade[i]=="C" || grade[i]=="c") {
                gradenumber=3.00;
            } else if(grade[i]=="D" || grade[i]=="d") {
                gradenumber=2.5;
            } else {
                gradenumber=2.00;
            }
            totalgradenumbers += gradenumber * credit[i];
        }
        cout<<"===========TOTAL GRADNUMBERS========="<<endl;
        cout<<"total gradenumbers:"<<totalgradenumbers<<endl;
        cout<<"===========TOTAL CREDITS==========="<<endl;
        cout<<"total credits is:"<<totalcredits<<endl;
        float totalgradepoints=totalgradenumbers;
        cout<<"===========TOTAL GRADEPOINTS========="<<endl;
        cout<<"total gradepoints:"<<totalgradepoints<<endl;
        float GPA = totalgradenumbers / totalcredits;
        cout<<"============GPA============"<<endl;
        cout<<"Your GPA is:"<<GPA<<endl;
    }
};
class cgpa {
private:
    int n;
public:
    void input() {
        cout<<"==========CGPA CALCULATOR=========="<<endl;
        cout<<"=========TOTAL SEMESTERS========="<<endl;
        cout<<"Enter number of semesters:"<<endl;
        cin>>n;
        float gpa[50];
        float totalgpa=0;
        for(int i=0; i<n; i++) {
            cout<<"Enter gpa:"<<endl;
            cin>>gpa[i];
            totalgpa+=gpa[i];
        }
        cout<<"totalgpa:"<<totalgpa<<endl;
        int totalcredits=0;
        int credit[50];
        cout<<"============CREDIT HOURS============"<<endl;
        for(int i=0; i<n; i++) {
            cout<<"Enter credit hours:"<<endl;
            cin>>credit[i];
            totalcredits+=credit[i];
        }
        cout<<"Totalcredits:"<<totalcredits<<endl;
        float weighted=0;
        float CGPA;
        for(int i=0; i<n; i++) {
            weighted+=gpa[i]*credit[i];
            CGPA=weighted/totalcredits;
        }
        cout<<"============CGPA============"<<endl;
        cout<<"total cgpa is:"<<CGPA<<endl;
    }
};
int main()
{
  cout<<"1.GPA CALCULATOR"<<endl;
  cout<<"2.CGPA CALCULATOR"<<endl;
  int choice;
  cout<<"Enter choice:"<<endl;
  cin>>choice;
  if(choice==1){
    gpa g1;
    g1.input();
    }else if(choice==2){
    cgpa c1;
    c1.input();
    }
    return 0;
}