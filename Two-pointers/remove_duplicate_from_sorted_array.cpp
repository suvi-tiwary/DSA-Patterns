#include <iostream>
using namespace std;

int main(){
    
    int num[]={2,2,2,2,5,7,7,7,9,12,12,12};
    int size= sizeof(num)/sizeof(num[0]);
    int officer=0;
    int cm = 1;
    int unique = 1;

    while(cm<size){
        if(num[cm]==num[cm-1]){
            cm++;
        }
        else{
            officer++;
            num[officer]=num[cm];
            cm++;
            unique ++;
        }
    }

    cout << "uniques elements are :" << unique;

    return 0;
}