#include<stdio.h>

    int findRepeatFirst(char s[])
    {
        int i, k,n=0;
      //  int MAX_CHAR = 256;
        int hash[256]={0};

       //count the character in array
        for(i=0;s[i]!='\0';i++)
            n++;

        for (i = 0; i < n; i++)
        {
            k = (int)s[i];

            if (hash[k] == 0)
            {
               ++hash[k];
            }
            else {
                hash[k]++;
			}
        }
		for (i = 0; i < n; i++)
        {
            k=(int)s[i];
            if (hash[k] == 1)
            {
                return i;
            }
        }
        return -1;
    }
    int main()
    {
        char str[] ="aabbkkddfff";
        int pos = findRepeatFirst(str);
        if (pos == -1)
            printf("%s","Not found");
        else
            printf("%c",str[pos]);

        return 0;
    }

