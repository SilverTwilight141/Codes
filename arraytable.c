#include<stdio.h>

int main(){
int numbers[2][3] = {1,2,3},{4,5,6};

prices[0][1] = 1;
prices[0][2] = 2;
prices[0][3] = 3;
prices[1][0] = 4;
prices[1][1] = 5;
prices[1][2] = 6;

for (int i = 0; i < 2; i++)
{
for (int j = 0; j < 3; j++)
{
printf("%d", numbers[i][j]);
}
printf("\n");
}


return 0;
}