#include <stdio.h>
#define MAX 5

 void printscan (int i, float numbers[]){
                     printf(" enter number %d of array\t",i+1);
                     scanf(" %f",&numbers[i]);
                    //  if(numbers[i] != (int)numbers[i]){
                    //   printf("Not an integer\n");
                    //   i--;
                    //  }
                     }
                     
void multiply(int i,float numbers[],float multi){
                        printf(" %d number of array to multiply  \t" ,i+1);
                    scanf("%f", &multi);
                    for (i = 0; i<5; i++){
                        numbers[i]= numbers[i]*multi;
                      }
                    }

void remzeros(float numbers[], int i){
  float addon;
  for(i = 0; i<5; i++) printf("%f\n", numbers[i]);
  for(i=0; i<5; i++){
    addon = numbers[i];
    if(numbers[i] == (int)numbers[i]){
      printf("%d",(int)numbers[i]);
    }else{
      printf("%d,",(int)numbers[i]);
    }
    while (numbers[i]-(int)numbers[i] !=0){
      numbers[i] = numbers[i]-(int)numbers[i];
      numbers[i] = numbers[i] * 10;
      printf("%d",(int)numbers[i]);
    }
    numbers[i] = addon;
    printf("\n");                      
  }
}

void roundup(float numbers[],int i){
    float var1,var2, numbers0[MAX];
    for (i=0; i>MAX; i++){
   
    var2 = numbers[i];
    var1 =  numbers[i] - (int)numbers[i];
    if (var1 >= 0.5){
        var1 =- 1;
        numbers[i]=+ var1;
    }
    else if(var1 < 0.5){
        numbers[i] =- var1;
    }
    else{}
    numbers0[i] = numbers[i];
    printf("%f",numbers0[i]);
    numbers[i] = var2;
     }
}


float remdouble(float numbers[], int i, int* x){
  int exists = 0;
  float numbers1[MAX], numbers2[MAX];
  for (i=0; i<5; i++){
    for(x=0; *x<5;x++){
      if(numbers[i] == numbers1[*x]) exists = 1;
    }
    if(exists) numbers1[i] = numbers[i];
  }
  for(int i =0; i<MAX; i++){
    if(numbers[i] != 0) x++;
    for(i =0; i<*x; i++){
      numbers2[i] = numbers1[i];
    }
  }
  return    numbers2;
}



int main() {
  int* x;
  *x = 0;
  float numbers[MAX],multi,numbers1[MAX],final[*x];
  int i;
  for (i = 0; i<MAX; i++) printscan(i,numbers);
  multiply(i,numbers,multi);
  remzeros(numbers, i);
  final[*x] = remdouble(numbers, i, x);
  return 0;
}