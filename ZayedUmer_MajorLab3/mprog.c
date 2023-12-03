#include <stdio.h>
#include <string.h>

int isDecreasingSeq(char x[]){
  int i;
  int len = strlen(x);
  for (i=0;i<len-1;i++){
    if (x[i]<=x[i+1]){
      return 0;
    }
  }
  return 1;
}

void main(){
  printf("Please input a sequence: ");
  char arr[100];

  scanf("%[^\n]",arr);

  if (isDecreasingSeq(arr)==1){
      printf("The sequence \"%s\" is a decreasing sequence\n",arr);
  }
  else{
      printf("The sequence \"%s\" is not a decreasing sequence\n",arr);
  }


}
