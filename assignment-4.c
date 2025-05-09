#include <stdio.h>
#include <string.h>

int is_palindrome(char s[])
{

    int length = strlen(s);

    int j = length - 1;

    int palindrome = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (s[i] != s[j])
        {
            palindrome = 0;
            break;
        }

        j--;
    }

    return palindrome;
}

int main()
{
    char s[1001];
    scanf("%s", s);

    int result = is_palindrome(s);

    printf("%s", result ? "Palindrome" : "Not Palindrome");

    return 0;
};