//EXPERIMENT-6
//Palak Soni
//24070123069
//Problem statement- Write a program using for loop to print even numbers from 0 to 10.
//ENTC A3

#include <iostream>
using namespace std;
int main() {
for(int i=0;i <=10 ;i++){
    if(i%2==0){
      cout<<i<<endl;  
      i++;
    }
}    
    return 0;
}

/*
output:
0
2
4
6
8
10
*/
