#include <stdio.h>

int main()
{
int nums[] = {1, 3, 5, 7, 9, 11, 13};
int sum = 0;

for(int i = 0; i < sizeof(nums); i++)
{
sum += nums[i];
}

printf("The sum of the numbers in the array is %i", sum);

return 0;
}

