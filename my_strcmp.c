/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** djzsfzs
*/

int my_strcmp(char *s1, char *s2)
{
    int	i;

    i = -1;
    while (s1[(i = i + 1)] != '\0' && s2[i] != '\0')
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    if (s1[i] != s2[i])
        return (s1[i] - s2[i]);
  return (0);
}
