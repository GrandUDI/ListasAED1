#include <stdio.h>
#include <stdlib.h>

int main(){
  float altMasc = 1.75;
  float pesoIdealMasc = (72.7 * altMasc) - 58;

  float altFemin = 1.75;
  float pesoIdealFemin = (62.1 * altFemin) - 44.7;

  printf("O peso ideal para um homem de %fm � %fkg. J� o peso ideal para uma mulher de %fm � %fkg",altMasc,pesoIdealMasc,altFemin,pesoIdealFemin);
}
