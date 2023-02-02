#include<stdio.h>
int hammingDist(char* str1, char* str2)
{
    int i = 0,count = 0;
    while(str1[i] != '\0')
    {
        if(str1[i] != str2[i])
        count++;
        i++;
    }
    return count;
}
int main()
{
    char str1[50],str2[50];
    printf("Enter the first string:");
    scanf("%s",str1);
    printf("Enter the second string:");
    scanf("%s",str2);
    printf("Hamming Distance: %d",hammingDist(str1,str2));
    return 0;
}
