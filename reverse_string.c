#include <limits.h>
#include <iostream>
#include <string>
#include <string.h>

using namespace std;

int min(int a, int b){  return a < b ? a : b; }

int findMinInsertionsRec(char str[], int l, int h)
{
    if (l > h) return INT_MAX;
    if (l == h) return 0;
    if (l == h - 1) return (str[l] == str[h])? 0 : 1;

    return (str[l] == str[h])? findMinInsertionsRec(str, l + 1, h - 1):
                               (min(findMinInsertionsRec(str, l, h - 1),
                                   findMinInsertionsRec(str, l + 1, h)) + 1);
}

int main()
{
    char str[] = "abcd";
    string str1="abcd";
    printf("%d\n", findMinInsertionsRec(str, 0, strlen(str)-1));
    cout << findMinInsertionsDP(str,strlen(str))<<endl;
    cout << findMinInsertionsDP2(str1)<<endl;

    return 0;
}
