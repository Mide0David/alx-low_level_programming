char *str_concat(char *s1, char *s2)
{
        int i, j, len_1 = 0, len_2 = 0;
        char *ptr;

        if (s1 == NULL)
        {
                s1 = "";
        }
        if (s2 == NULL)
        {
                s2 = "";
        }

        while (*(s1 + len_1) != '\0')
        {
                len_1++;
        }
        while (*(s2 + len_2) != '\0')
        {
                len_2++;
        }
        ptr = (char *) malloc((len_1 + len_2 + 1) * sizeof(char));
        if (ptr == NULL)
        {
                return (NULL);
        }

        for (i = 0; *(s1 + i) != '\0'; i++)
        {
                *(ptr + i) = *(s1 + i);
        }
        for (j = 0; *(s2 + j) != '\0'; j++)
        {
                *(ptr + i + j) = *(s2 + j);
        }
        *(ptr + i + j) = '\0';
        return (ptr);
} 
