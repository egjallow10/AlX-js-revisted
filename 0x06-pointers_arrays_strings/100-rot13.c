char *rot13(char *str)
{
    int i = 0, j;
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    /* Loop through the string */
    while (str[i] != '\0')
    {
        /* Loop through alphabet to find a match */
        for (j = 0; alphabet[j] != '\0'; j++)
        {
            /* If current char is a letter, replace with ROT13 equivalent */
            if (str[i] == alphabet[j])
            {
                str[i] = rot13[j];
                break; /* Exit inner loop after replacement */
            }
        }
        i++;
    }
    return str;
}
