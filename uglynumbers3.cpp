#include <iostream>

using namespace std;


bool dividesby235(int num) {

   if (num%2==0)
    return true;
   if (num%3==0)
    return true;
   if (num%5==0)
    return true;
   return false;

}

int main(){
    long countOfUglyNum=0;
    long num=0;
    long numtest;

    while (countOfUglyNum<1500){
        num++;
        numtest=num;
        while (dividesby235(numtest)){
            if (numtest%2==0){
                numtest=numtest/2;
            }
            if (numtest%3==0){
                numtest=numtest/3;
            }
            if (numtest%5==0){
                numtest=numtest/5;
            }

        }
        if (numtest==1){
            countOfUglyNum++;
            }

    }
    cout << num;

}
