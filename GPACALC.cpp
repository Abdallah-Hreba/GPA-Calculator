#include <iostream>
using namespace std;
/*
This GPA Calculator Program Was Made By Abdallah Hreba On 6/17/2022
*/
struct course
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
};
struct course2
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
};
struct course3
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
};
struct course4
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
};
struct course5
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
};
struct course6
{
    string name;
    float creditentialhours;
    float percentage;
    float points;
    float hp;
    
};
int main()
{
    course n1 =  {"cs",3,0.73,2.7,8.1};
    course2 n2 = {"tw",3,0.85,3.7,11.1};
    course3 n3 = {"hr",2,0.92,3.8,7.6};
    course4 n4 = {"ec",1,0.67,2.3,2.3};
    course5 n5 = {"ct",3,0.70,2.5,7.5};
    course6 n6 = {"rw",2,0.89,3.7,7.4};
    cout<<"enter ur first course creditential hours: ";
    cin>>n1.creditentialhours;
    cout<<"enter ur first course percentage: ";
    cin>>n1.percentage;
    if (n1.percentage > 0 && n1.percentage < 50)
    {
        n1.points = 0;
    }
    else if(n1.percentage>=50 && n1.percentage < 53)
    {
        n1.points = 2;
    }
    else if(n1.percentage>=53 && n1.percentage < 65)
    {
        n1.points = 2.2;
    }
    else if(n1.percentage>=65 && n1.percentage < 68)
    {
        n1.points = 2.3;
    }
    else if(n1.percentage>=68 && n1.percentage < 72)
    {
        n1.points = 2.5;
    }
    else if(n1.percentage>=72 && n1.percentage < 75)
    {
        n1.points = 2.7;
    }
    else if(n1.percentage>=75 && n1.percentage < 78)
    {
        n1.points = 3;
    }
    else if(n1.percentage>=78 && n1.percentage < 80)
    {
        n1.points = 3.2;
    }
    else if(n1.percentage>=80 && n1.percentage < 85)
    {
        n1.points = 3.5;
    }
    else if(n1.percentage>=85 && n1.percentage < 90)
    {
        n1.points = 3.7;
    }
    else if(n1.percentage>=90 && n1.percentage < 95)
    {
        n1.points = 3.8;
    }
    else if(n1.percentage>= 95 && n1.percentage <= 100)
    {
        n1.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n1.hp = n1.creditentialhours * n1.points;
    //.......................
    cout<<"enter ur second course creditential hours: ";
    cin>>n2.creditentialhours;
    cout<<"enter ur second course percentage: ";
    cin>>n2.percentage;
    if (n2.percentage > 0 && n2.percentage < 50)
    {
        n2.points = 0;
    }
    else if(n2.percentage>=50 && n2.percentage < 53)
    {
        n2.points = 2;
    }
    else if(n2.percentage>=53 && n2.percentage < 65)
    {
        n2.points = 2.2;
    }
    else if(n2.percentage>=65 && n2.percentage < 68)
    {
        n2.points = 2.3;
    }
    else if(n2.percentage>=68 && n2.percentage < 72)
    {
        n2.points = 2.5;
    }
    else if(n2.percentage>=72 && n2.percentage < 75)
    {
        n2.points = 2.7;
    }
    else if(n2.percentage>=75 && n2.percentage < 78)
    {
        n2.points = 3;
    }
    else if(n2.percentage>=78 && n2.percentage < 80)
    {
        n2.points = 3.2;
    }
    else if(n2.percentage>=80 && n2.percentage < 85)
    {
        n2.points = 3.5;
    }
    else if(n2.percentage>=85 && n2.percentage < 90)
    {
        n2.points = 3.7;
    }
    else if(n2.percentage>=90 && n2.percentage < 95)
    {
        n2.points = 3.8;
    }
    else if(n2.percentage>= 95 && n2.percentage <= 100)
    {
        n2.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n2.hp = n2.creditentialhours * n2.points;
    //.....................
    cout<<"enter ur third course creditential hours: ";
    cin>>n3.creditentialhours;
    cout<<"enter ur third course percentage: ";
    cin>>n3.percentage;
    if (n3.percentage > 0 && n3.percentage < 50)
    {
        n3.points = 0;
    }
    else if(n3.percentage>=50 && n3.percentage < 53)
    {
        n3.points = 2;
    }
    else if(n3.percentage>=53 && n3.percentage < 65)
    {
        n3.points = 2.2;
    }
    else if(n3.percentage>=65 && n3.percentage < 68)
    {
        n3.points = 2.3;
    }
    else if(n3.percentage>=68 && n3.percentage < 72)
    {
        n3.points = 2.5;
    }
    else if(n3.percentage>=72 && n3.percentage < 75)
    {
        n3.points = 2.7;
    }
    else if(n3.percentage>=75 && n3.percentage < 78)
    {
        n3.points = 3;
    }
    else if(n3.percentage>=78 && n3.percentage < 80)
    {
        n3.points = 3.2;
    }
    else if(n3.percentage>=80 && n3.percentage < 85)
    {
        n3.points = 3.5;
    }
    else if(n3.percentage>=85 && n3.percentage < 90)
    {
        n3.points = 3.7;
    }
    else if(n3.percentage>=90 && n3.percentage < 95)
    {
        n3.points = 3.8;
    }
    else if(n3.percentage>= 95 && n3.percentage <= 100)
    {
        n3.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n3.hp = n3.creditentialhours * n3.points;
    //...........................
    cout<<"enter ur fourth course creditential hours: ";
    cin>>n4.creditentialhours;
    cout<<"enter ur fourth course percentage: ";
    cin>>n4.percentage;
    if (n4.percentage > 0 && n4.percentage < 50)
    {
        n4.points = 0;
    }
    else if(n4.percentage>=50 && n4.percentage < 53)
    {
        n4.points = 2;
    }
    else if(n4.percentage>=53 && n4.percentage < 65)
    {
        n4.points = 2.2;
    }
    else if(n4.percentage>=65 && n4.percentage < 68)
    {
        n4.points = 2.3;
    }
    else if(n4.percentage>=68 && n4.percentage < 72)
    {
        n4.points = 2.5;
    }
    else if(n4.percentage>=72 && n4.percentage < 75)
    {
        n4.points = 2.7;
    }
    else if(n4.percentage>=75 && n4.percentage < 78)
    {
        n4.points = 3;
    }
    else if(n4.percentage>=78 && n4.percentage < 80)
    {
        n4.points = 3.2;
    }
    else if(n4.percentage>=80 && n4.percentage < 85)
    {
        n4.points = 3.5;
    }
    else if(n4.percentage>=85 && n4.percentage < 90)
    {
        n4.points = 3.7;
    }
    else if(n4.percentage>=90 && n4.percentage < 95)
    {
        n4.points = 3.8;
    }
    else if(n4.percentage>= 95 && n4.percentage <= 100)
    {
        n4.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n4.hp = n4.creditentialhours * n4.points;
    //...........................
    cout<<"enter ur fifth course creditential hours: ";
    cin>>n5.creditentialhours;
    cout<<"enter ur fifth course percentage: ";
    cin>>n5.percentage;
    if (n5.percentage > 0 && n5.percentage < 50)
    {
        n5.points = 0;
    }
    else if(n5.percentage>=50 && n5.percentage < 53)
    {
        n5.points = 2;
    }
    else if(n5.percentage>=53 && n5.percentage < 65)
    {
        n5.points = 2.2;
    }
    else if(n5.percentage>=65 && n5.percentage < 68)
    {
        n5.points = 2.3;
    }
    else if(n5.percentage>=68 && n5.percentage < 72)
    {
        n5.points = 2.5;
    }
    else if(n5.percentage>=72 && n5.percentage < 75)
    {
        n5.points = 2.7;
    }
    else if(n5.percentage>=75 && n5.percentage < 78)
    {
        n5.points = 3;
    }
    else if(n5.percentage>=78 && n5.percentage < 80)
    {
        n5.points = 3.2;
    }
    else if(n5.percentage>=80 && n5.percentage < 85)
    {
        n5.points = 3.5;
    }
    else if(n5.percentage>=85 && n5.percentage < 90)
    {
        n5.points = 3.7;
    }
    else if(n5.percentage>=90 && n5.percentage < 95)
    {
        n5.points = 3.8;
    }
    else if(n5.percentage>= 95 && n5.percentage <= 100)
    {
        n5.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n5.hp = n5.creditentialhours * n5.points;
    //..............................
    cout<<"enter ur sixth course creditential hours: ";
    cin>>n6.creditentialhours;
    cout<<"enter ur sixth course percentage: ";
    cin>>n6.percentage;
    if (n6.percentage > 0 && n6.percentage < 50)
    {
        n6.points = 0;
    }
    else if(n6.percentage>=50 && n6.percentage < 53)
    {
        n6.points = 2;
    }
    else if(n6.percentage>=53 && n6.percentage < 65)
    {
        n6.points = 2.2;
    }
    else if(n6.percentage>=65 && n6.percentage < 68)
    {
        n6.points = 2.3;
    }
    else if(n6.percentage>=68 && n6.percentage < 72)
    {
        n6.points = 2.5;
    }
    else if(n6.percentage>=72 && n6.percentage < 75)
    {
        n6.points = 2.7;
    }
    else if(n6.percentage>=75 && n6.percentage < 78)
    {
        n6.points = 3;
    }
    else if(n6.percentage>=78 && n6.percentage < 80)
    {
        n6.points = 3.2;
    }
    else if(n6.percentage>=80 && n6.percentage < 85)
    {
        n6.points = 3.5;
    }
    else if(n6.percentage>=85 && n6.percentage < 90)
    {
        n6.points = 3.7;
    }
    else if(n6.percentage>=90 && n6.percentage < 95)
    {
        n6.points = 3.8;
    }
    else if(n6.percentage>= 95 && n6.percentage <= 100)
    {
        n6.points = 4;
    }
    else
    {
        cout<<"please make sure u entered a positive percentage."<<endl;
    }
    n6.hp = n6.creditentialhours * n6.points;
    float sum_hours = n1.creditentialhours+n2.creditentialhours+n3.creditentialhours+n4.creditentialhours+n5.creditentialhours+n6.creditentialhours;
    float sum_hp = n1.hp+n2.hp+n3.hp+n4.hp+n5.hp+n6.hp;
    float gpa = sum_hp / sum_hours;
    cout<<"your gpa = "<<gpa<<endl;
}