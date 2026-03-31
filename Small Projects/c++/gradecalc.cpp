#include <iostream>
using namespace std;

int main(){

    int numofsubj;
    double marks, grade;

    cout<<"Enter the number of subjects: ";
    cin>>numofsubj;

    for (int i=0; i<numofsubj; i++){
        
        cout<<"Enter the marks for subject "<<i+1<<": ";
        cin>>marks;

        grade+=marks;        
        }
    
    grade=grade/numofsubj;
    cout<<"Average grade: "<<grade<<endl;
    return 0;
}