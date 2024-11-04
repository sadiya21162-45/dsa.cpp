#include<iostream>
#include<string>
using nmaespace std ;

struct  student
{
    int rollNo;
    int fee ;
    int sem;
};
int main(){
    struct student sadiya ;
    sadiya.rollNo =21;
    sadiya.fee =260000;
    cout <<"<studen per sem fee"<<sadiya.fee ;
 return 0;
}
