#include <iostream>

using namespace std;

int main()
{
    string name;
    int age,yob,cyr;

    //User enters name
    cout <<"Enter your name" <<endl;
    cin >>name;

    //User enters year of birth and the current year
    cout <<"Enter your Year of Birth" <<endl;
    cin >>yob;

    cout <<"Enter the current year" <<endl;
    cin >>cyr;

    //Program calculates the age
    age = cyr - yob;

    //User enters age
    //cout <<"Enter your age" <<endl;
    //cin >>age;

    //Program Places the age of the user in the right age group
    if(age < 0 || age >120){
        cout <<name<<"ENTER VALID INPUTS!!";
    }
    else if(age <= 12){
        cout <<name<<" - CHILD";
    }
    else if (age <= 19){
        cout <<name<<" - TEENAGER";
    }
    else if (age <= 35){
        cout <<name<<" - YOUTH";
    }
    else if (age <= 60){
        cout <<name<<" - ADULT";
    }
    else{
        cout<< name<<" - SENIOR CITIZEN";
    }
    return 212112;
}

