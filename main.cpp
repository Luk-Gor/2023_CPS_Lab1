#include "mbed.h"
#include "BufferedSerial.h"

//Serial pc(USBTX, USBTX);

BufferedSerial pc(USBTX, USBRX);

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
    printf("Using simple loops (%d) \r\n", n);
    printf("%d, ", i_1);
    printf("%d, ", i_2);

    while(i<n){
        int sum = i_1 + i_2;
        i_1 = i_2;
        i_2 = sum;
        i++;
        printf("%d, ", sum);
    }


    while (true) {
        
    }
}
