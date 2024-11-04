/* #include<iostream>
using namespace std;
int main(){
    int a=2;
    float c = 2.2;
    char d = 's';
    cout<<"print the value of integer "<<a<<endl;
    cout<<"print the value of float value"<<c<<endl;
    cout<<"print the value of charcater value"<<d<<endl;
    return 0;
}
#include<iostream>
using namespace std;
float absolute( float var){
    if(var<0.0)
    var = -var;
    return var;
}
int absolute(int var){
    if(var<0)
    var = -var;
    return var;
}
int main(){
    cout<<"absolute of -5 :"<<absolute(-5)<<endl;
    cout<<"absolut of -5.5f :"<<absolute(-5.5f)<<endl;
    return 0;
} 
#include<iostream>
using namespace name
 void display(int var1 , float var2){
    cout<<" the value of integer number is : "<< var1 <<endl;
    cout<<"the value of float number  is :"<< var2 <<endl;
 }
 void display(double var ){
    cout<<"the value of double type of number is :"<< var <<endl;
 }
 int main(){
    int a = 5;
    float b = 5.5;
    
    display(a,b);
    dispaly(a);
    
    return 0;
 }
#include<iostream>
using namespace std;
 int sum(int num1 , int num2){
    cout<<"using function with 2 argument : "<<endl;
    return num1+num2 ;
 }
 int sum(int num1 , int num2 ,  int num3 ){
    cout<<"using function with 3 argument: "<<endl;

return num1 + num2 + num3 ;
 } 
 int main(){
    cout<<"the sum,,,,,etccccccccc mn nhi h ab"
 }  
#include<iostream>
using namespace std ;
inline void dispalyNum(int num){
    cout<<num<<endl;
}
int main(){
  dispalyNum(5);
  dispalyNum(33);
  return 0;  
} 
#include<iostream>
using namespace std;
class room{
    public :
    double len ;
    double bre ;
    double hei ;
    double  calculate_area() {
return len*bre;
    }
    double calculate_volume(){
        return len*bre*hei;
    }

    
};
int main(){
     room room1;
    room1.len = 2.2;
    room1.bre =3.3;
    room1.hei = 4.4;
    cout<<"the area of room is "<<room1.calculate_area() <<endl;
    cout<<"the volume of room is :"<<room1.calculate_volume()<<endl ;
    return 0;

} 
#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;
void print3largestnumber( int arr[],  int arr_size){
    int first , second , third ;
    if( arr[]<3 ){
        cout<<"invalid example"<<endl;
        return ;
    }
     third = first = second = INT_MAX;
     for(int i = 0 ; i< arr_size ; i++){

        if(arr[i]> first  ){
            third = second;
            second = first ;
            first = arr[i];

        }
         else if( arr[i]> second && arr[i] != first ){
            third = second ;
            second = arr[i];
        }
         else if ( arr[i]> third && arr[i] != second && arr[i] != first){
            third = arr[i];
         }
          cout<<" three laegest number are"<< first << " "<< second << " "<< third << " " <<endl;
     } 
     int main()
     {
        arr[] =  { 11, 22,33,4,3,2,};
        n = sizeof(arr)/sizeof(arr[0]);
        print3largestnumber( arr , n);
        return 0 ;
}*/
/*#include<iostream>
using namespace std;
class employee{
    private :
    int a , b ;
    public:
     int c,d ;
     void setData(int a1 , int b1);
     void getData(){
        cout<<"enter the value of a is :"<< a <<endl;
        cout<<"enter the value of b is :"<< b <<endl;
        cout<<"enter the value of c is : "<< c << endl;
        cout<<"enter the value of d is : "<< d <<endl;
     }  
     };


void employee :: setData(int a1 , int b1){
    a = a1 ;
    b = b1;

}
int main(){
    employee sadiya ;
    sadiya.c = 100000;
    sadiya.d = 2000000;
     sadiya.setData(1 , 2);
    sadiya.getData();
    return 0 ;
} 
#include<iostream>
using namespace std;
class employee{
    private :
    int a , b , c ;
    public :
    int d , e;
    setData(int a1 , int b1 , int c1);
    getData(){
        cout<<"the value of a is : " <<a <<endl;
         cout<<"the value of b is : " <<b <<endl;
        cout<<"the value of c is : " <<c<<endl;
        cout<<"the value of d is : " <<d<<endl;
        cout<<"the value of e is : " <<e <<endl;

    }

};
void employee :: setData(int a1 , int b1 , int c1){
    a = a1;
    b = b1 ;
    c = c1;
}
int main(){
employee sadiya;
sadiya.d = 100000000;
sadiya.e = 200000000;
sadiya.setData( 1000000 , 2000000 , 3000000);
sadiya.getData();
return 0 ;
} 
#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();
    return 0;
}
 */