#include <stdio.h>
#include <string.h>

void flipChars(char x[]){
  int len = strlen(x);
  for (int i=0;i<len;i++){

    //if char is lowercase vowel
    if (x[i]=='a'|| x[i]=='e'|| x[i]=='i'|| x[i]=='o'|| x[i]=='u'){
      x[i] = toupper(x[i]);
    }
    //if char is uppercase vowel
    else if (x[i]=='A'|| x[i]=='E'|| x[i]=='I'|| x[i]=='O'|| x[i]=='U'){
      x[i] = tolower(x[i]);
    }
    //if char is uppercase consonant we must make it the next uppercase consonant
    else if (x[i]>='A' && x[i]<='Z'){
      if (x[i]=='Z'){
        x[i] = 'B';
      }
      else{
        x[i] = x[i]+1;
        if (x[i]=='A'|| x[i]=='E'|| x[i]=='I'|| x[i]=='O'|| x[i]=='U'){
          x[i] = x[i]+1;
        }
      }
    }

    //same thing but now lowercase
    else if (x[i]>='a' && x[i]<='z'){
      if (x[i]=='z'){
        x[i] = 'b';
      }
      else{
        x[i] = x[i]+1;
        if (x[i]=='a'|| x[i]=='e'|| x[i]=='i'|| x[i]=='o'|| x[i]=='u'){
          x[i] = x[i]+1;
        }
      }
    }
    //if isdigit we must invert such that 0 becomes 9 ,1 becomes 8, 9 becomes 0 and so forth
    else if (x[i]>='0' && x[i]<='9'){
      x[i] = '9' - x[i] + '0';
    }

    //if is special character we must make it !
    else{
      x[i] = '!';
    }

  }

  printf("String after flip operation: \'%s\'\n",x);
}


void main(){
  printf("Please enter a text string.\n");
  char arr[100];
  scanf("%[^\n]",arr);
  printf("You entered string: \'%s\'\n",arr);
  flipChars(arr);

}
