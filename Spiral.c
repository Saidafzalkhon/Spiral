#include<stdio.h>
int main(){
int n,a,b,c,d,k = 1;
printf("Massiv uzunligini kiriting: ");
scanf("%d",&n);
int massiv[n][n];
for(int i = 0; i<n; i++){
for(a = i; a<n-i; a++){
massiv[i][a] = k++;
}
k--;
for(b = i; b<n-i; b++){
massiv[b][a-1] = k++;
}
k--;
for(c = n-i-1; c>=i; c--){
massiv[b-1][c] = k++;
}
k--;
for(d = b-1; d>i; d--){
massiv[d][i] = k++;
}
}
for(int i = 0; i<n; i++){
for(int j = 0; j<n; j++){
printf("%d%s",massiv[i][j],massiv[i][j]<10?"  ":" ");
}
printf("\n");
}
return 0;
}