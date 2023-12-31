#include "main.h"

/**
 * wildcmp - compares 2 strs, returns 1 if the strs are considered identical,
 * else 0
 *
 * @s1: pointer to str
 *
 * @s2: pointer to str
 *
 * Return: SUCCESS
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0')
{
if (*s2 != '\0' && *s2 == '*')
{
return (wildcmp(s1, s2 + 1));
}
return (*s2 == '\0');
}

if (*s2 == '*')
{
return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
}
else if (*s1 == *s2)
{
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
