/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 14:14:11 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/02 14:14:14 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static  int set_fun(char c, char *set)
{
    size_t i;

    i = 0;
    while (set[i])
    {
        if (c == set[i])
        {
            return (1);
        }
        i++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char *ptr_s1;
    char *ptr_set;
    char *ptr;
    size_t start;
    size_t end;
    size_t i;
    size_t len;

    ptr_s1 = (char *)s1;
    ptr_set = (char *)set;
    start = 0;
    end = ft_strlen(ptr_s1);

    while (ptr_s1[start] && set_fun(ptr_s1[start], ptr_set) == 1)
    {
        start++;
    }
    while (end > start && set_fun(ptr_s1[end - 1], ptr_set) == 1)
    {
        end--;
    }

    len = end - start;
    printf("The len: %ld\n", len);
    printf("The start: %ld\n", start);
    printf("The end: %ld\n", end);
    ptr = malloc((len + 1)*sizeof(char));
    
    i = 0;
    while (ptr_s1[start] && i < len)
    {
        ptr[i] = ptr_s1[start + i];
        i++;
    }
    ptr[i] = '\0';

    return (ptr);
}
/*
int main()
{
    char const s1[] = "ababaaaMy name is Simonbbaaabba";
    char const set[] = "ab";
    char *r = ft_strtrim(s1, set);
    printf("%s\n", r);
    free(r);
}
*/