#include "mbed.h"

Serial pc(USBTX, USBTX);

//counter
int i=2;
//term value
int n=5;
//firts term
int i_1 = 0;
//second term
int i_2 = 1;

int main()
{
    pc.printf("Using simple loops (%d) \r\n", n);
    pc.printf("%d, ", i_1);
    pc.printf("%d, ", i_2);

    while(i<n){
        int sum = i_1 + i_2;
        i_1 = i_2;
        i_2 = sum;
        i++;
        pc.printf("%d, ", sum);
    }


    while (true) {
        
    }
}
