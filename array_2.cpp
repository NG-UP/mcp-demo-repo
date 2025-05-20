#include<iostream>

int sum(int ar2[][4]int size);

int main(){
    int data[4][4] = {
        {1234}
        {5678}
        {9101112}
        {13141516}
    };
    sum(data4);
}

int sum(int ar2[][4]int size){
    int sum = 0;
    for(int i=0;i&lt;size;i++){
        for(int j=0;j&lt;4;j++){
            sum += ar2[i][j];
        }
    }
    return sum;
}