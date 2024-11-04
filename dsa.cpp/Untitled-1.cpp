#include<iostream>
#include<cstring>
using namespace std;
void to_lower(char A[]){
    int n= strlen(A);
    for(int i=0;i<n;i++){
        if (A[i] >= 'A' && A[i] <= 'Z') {
            A[i]=A[i]+('a'- 'A');
        }
    }
}
int main(){
    char A[]="hello dearr";
    to_lower(A);
    cout<<"lowrrr version"<<A<<endl;
    return 0;
}