#include<stdio.h>

int arr[51][51];

int f(int r, int c){
  if(r==1 || c==1) return 1;
  if(arr[r][c]) return arr[r][c];
  return arr[r][c] = (f(r-1, c) + f(r, c-1))%100000000;
}
int main(){
  int r, c;
  scanf("%d %d", &r, &c);
  printf("%d", f(r, c));
  return 0;
}