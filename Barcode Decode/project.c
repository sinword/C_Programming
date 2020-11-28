#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Display “bad code” if the barcode cannot be successfully decoded due to bar widths outside the allowable range, missing or invalid
// start/stop codes, or some other invalid condition.
// If the decoding is successful but the C check character is incorrect, then display “bad C”.
// If the decoding is successful and the C check character is correct but the K check character is incorrect, then display “bad K”.

int cover(int index[], int n, int *base){
  int count, narrow, width;
  for(int i=1;i<=100;i++){
    count = 0;
    narrow = 0;
    width = 0;
    if(index[i]){
      for(int j=i*0.95;j<=i*1.05;j++){
        narrow += index[j];
      }
      for(int j=2*i*0.95;j<=2*i*1.05;j++){
        width += index[j];
      }
      count = narrow + width;
      if(count == n && narrow != 0 && width != 0){
        *base = i;
        return 1;
      }
    }
  }
  return 0;
}

void binary(int data[], int n, int base){
  for(int i=0;i<n;i++){
    if(data[i] >= base*0.95 && data[i] <= base*1.05){
      data[i] = 0;
    }
    else{
      data[i] = 1;
    }
    //printf("%d ", data[i]);
  }
}

int decode(int data[], int n, char barcode[]){
  int dir; // 1 represents ->, 0 represents <-.
  int temp;
  int count = 0;
  //printf("dir is %d\n\n", data[3]);
  if(data[3] == 1){
    dir = 1;
    for(int i=6;i<n-5;i+=6){
      temp = 0;
      for(int j=i;j<i+5;j++){
        temp = temp*10 + data[j];
        //printf("i=%d, %d ", i, temp);
      }
      switch(temp){
        case 11:
          barcode[count] = '0';
          break;
        case 1001:
          barcode[count] = '1';
          break;
        case 10000:
          barcode[count] = '2';
          break;
        case 10100:
          barcode[count] = '3';
          break;
        case 11000:
          barcode[count] = '4';
          break;
        case 101:
          barcode[count] = '5';
          break;
        case 1100:
          barcode[count] = '6';
          break;
        case 1:
          barcode[count] = '7';
          break;
        case 10010:
          barcode[count] = '8';
          break;
        case 10001:
          barcode[count] = '9';
          break;
        case 100:
          barcode[count] = '-';
          break;
      }
      //printf("=>%c\n", barcode[count]);
      count++;
    }
  }
  else{
    dir = 0;
    for(int i=n-7;i>4;i-=6){
      temp = 0;
      for(int j=i;j>i-5;j--){
        temp = temp*10 + data[j];
        //printf("j=%d, data=%d, temp=%d ", j,data[j], temp);
      }
      switch(temp){
        case 11:
          barcode[count] = '0';
          break;
        case 1001:
          barcode[count] = '1';
          break;
        case 10000:
          barcode[count] = '2';
          break;
        case 10100:
          barcode[count] = '3';
          break;
        case 11000:
          barcode[count] = '4';
          break;
        case 101:
          barcode[count] = '5';
          break;
        case 1100:
          barcode[count] = '6';
          break;
        case 1:
          barcode[count] = '7';
          break;
        case 10010:
          barcode[count] = '8';
          break;
        case 10001:
          barcode[count] = '9';
          break;
        case 100:
          barcode[count] = '-';
          break;
      }
      //printf("%c", barcode[count]);
      count++;
    }
  }
  barcode[count] = '\0'; // 若以%c方式讀取時才需要'\0'
  return count;
}

int c_cal(char barcode[], int n){
  int w, c = 0;
  for(int i=0;i<n-2;i++){
    if(barcode[i] - '0' >= 0 && barcode[i] - '0' <= 9){
      w = barcode[i] - '0';
    }
    else{
      w = 10;
    }
    c += ((((n-2) - (i + 1)) % 10) + 1) * w;
  }
  c %= 11;
  //printf("\nc = %d", c);
  return c;
}

int k_cal(char barcode[], int n){
  int w, k = 0;
  for(int i=0;i<n-1;i++){
    if(barcode[i] - '0' >= 0 && barcode[i] - '0' <= 9){
      w = barcode[i] - '0';
    }
    else{
      w = 10;
    }
    k += ((((n - 1) - (i + 1)) % 9) + 1) * w;
  }
  k %= 11;
  //printf("\nk = %d", k);
  return k;
}

int main(){
  int n;//data length
  scanf("%d", &n);
  char barcode[n-10];
  int count = 1;
  while(n != 0){
    int data[n];
    int index[201] = {0};
    int base, c, k,len;
    for(int i=0;i<n;i++){
      scanf("%d", &data[i]);
      index[data[i]]++;
    }
    printf("Case %d: ", count);
    if(cover(index, n, &base)){
      binary(data, n, base); // convert to barcode
      len = decode(data, n, barcode); // decode
      c = c_cal(barcode, len); // calculate c
      k = k_cal(barcode, len); // calculate k
      //printf("\n%c %c\n", barcode[len-2], barcode[len-1]);
      if(c == barcode[len-2] - '0'){
        if(k == barcode[len-1] - '0'){
          for(int i=0;i<len-2;i++){
            printf("%c", barcode[i]);
          }
          printf("\n");
        }
        else{
          printf("bad K\n");
        }
      }
      else{
        if(k == barcode[len-1] - '0'){
          printf("bad C\n");
        }
        else{
          printf("bad code\n");
        }
      }
    }
    else{
      printf("bad code\n");
    }
    scanf("%d", &n);
    count++;
  }
}
