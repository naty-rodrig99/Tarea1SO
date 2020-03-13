#include <stdio.h>
#include <string.h>

void encryptLetter(char letter){
  if( letter == 'A' || letter == 'a'){
      printf("%s","2");
  } else if( letter == 'B' || letter == 'b'){
      printf("%s","22");
  } else if( letter == 'C' || letter == 'c'){
      printf("%s","222");
  } else if( letter == 'D' || letter == 'd'){
      printf("%s","3");
  } else if( letter == 'E' || letter == 'e'){
      printf("%s","33");
  } else if( letter == 'F' || letter == 'f'){
      printf("%s","333");
  } else if( letter == 'G' || letter == 'g'){
      printf("%s","4");
  } else if( letter == 'H' || letter == 'h'){
      printf("%s","44");
  } else if( letter == 'I' || letter == 'i'){
      printf("%s","444");
  } else if( letter == 'J' || letter == 'j'){
      printf("%s","5");
  } else if( letter == 'K' || letter == 'k'){
      printf("%s","55");
  } else if( letter == 'L' || letter == 'l'){
      printf("%s","555");
  } else if( letter == 'M' || letter == 'm'){
      printf("%s","6");
  } else if( letter == 'N' || letter == 'n'){
      printf("%s","66");
  } else if( letter == 'O' || letter == 'o'){
      printf("%s","666");
  } else if( letter == 'P' || letter == 'p'){
      printf("%s","7");
  } else if( letter == 'Q' || letter == 'q'){
      printf("%s","77");
  } else if( letter == 'R' || letter == 'r'){
      printf("%s","777");
  } else if( letter == 'S' || letter == 's'){
      printf("%s","7777");
  } else if( letter == 'T' || letter == 't'){
      printf("%s","8");
  } else if( letter == 'U' || letter == 'u'){
      printf("%s","88");
  } else if( letter == 'V' || letter == 'v'){
      printf("%s","888");
  } else if( letter == 'W' || letter == 'w'){
      printf("%s","9");
  } else if( letter == 'X' || letter == 'x'){
      printf("%s","99");
  } else if( letter == 'Y' || letter == 'y'){
      printf("%s","999");
  } else if( letter == 'Z' || letter == 'z'){
      printf("%s","9999");
  } else{
    printf("%s","Caracter Invalido");
  }
}

int main()
{
   int i, x;
   char str[100];

   int p;
   printf("Ingrese un string: ");
   scanf ("%s",&str);

    int repeat, ascii;

    if(strlen(str) == 1){
        ascii = str[i];
        if (ascii >= 97){
          repeat = ascii - 96;
        } else{
          repeat = ascii - 64;
        }
        encryptLetter(ascii);
        printf("\n");
    }
    else{
        for (int i = 0; i < strlen(str); i++) {
            ascii = str[i];
            if (ascii >= 97){
              repeat = ascii - 96;
            } else{
              repeat = ascii - 64;
            }
            encryptLetter(ascii);
        }
        printf("\n");
    }
   return 0;
}
