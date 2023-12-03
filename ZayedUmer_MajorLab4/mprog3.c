#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void init_arr(int x[], int len) {
srand(time(NULL)); // Seed the random number generator with the current time
int i;
for (i = 0; i < len; i++) {
x[i] = rand() % 100; // Generate random numbers between 0 and 99
} 
    
}

void rot_left(int x[],int len){
    //rotate each element left by one anf make the first element the last
    int temp = x[0];
    int i;
    for(i=0;i<len-1;i++){
        x[i] = x[i+1];
    }
    x[len-1] = temp;

    
}

void rot_right_arr(int x[],int len){
    int temp = x[len-1];
    int i;
    for(i=len-1;i>0;i--){
        x[i] = x[i-1];
    }
    x[0] = temp;
}

void rot_arr(int x[],int len,int r){
    if(r>0){
   
      for (int i = 0; i < r; i++) {
        rot_right_arr(x, len);
      }
    }else if (r<0){
      
        for (int i = 0; i < -1*r; i++) {
        rot_left(x, len);
      }
    }
}
void show_arr(int x[],int len){
  printf("Array: [ ");
    for(int i =0;i<len;i++){
        printf("%d ",x[i]);
    }
    printf("]\n");
}
int main(int agrc,char** argv){
    int x[20];

    if (agrc != 3){
        printf("Incorrent number of command line arguments\n");
        printf("Usage: mprog3 <size> <rotations>\n");
        exit(1);
}
int len = atoi(argv[1]);
if (len<2||len>20){
    printf("Incorrect length %d\n",len);
    exit(1);
}
int r = atoi(argv[2]);
printf("Creating an array of size %d,",len);
if (r>0){
    printf(" rotating it right by %d positions\n",r);
}
else if (r<0){
    printf(" rotating it left by %d positions\n",-1*r);
}
else{
    printf(" not rotating\n");
}

init_arr(x,len);
show_arr(x,len);
rot_arr(x,len,r);
show_arr(x,len);

}