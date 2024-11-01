/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 14:44:14 by hkemmoun          #+#    #+#             */
/*   Updated: 2024/11/01 14:44:16 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *ptr_s1;
    char *ptr_s2;
    char *ptr;
    size_t s1_len;
    size_t s2_len;
    size_t i;
    size_t j;

    ptr_s1 = (char *)s1;
    ptr_s2 = (char *)s2;
    s1_len = ft_strlen(ptr_s1);
    s2_len = ft_strlen(ptr_s2);
    ptr = malloc(s1_len + s2_len + 1);

    if (!ptr)
    {
        return (NULL);
    }

    i = 0;
    while (ptr_s1[i])
    {
        ptr[i] = ptr_s1[i];
        i++;
    }
    j = 0;
    while (ptr_s2[j])
    {
        ptr[i + j] = ptr_s2[j];
        j++;
    }
    ptr[i + j] = '\0';

    return (ptr);
}

int main()
{
    char const *s1 = "hello ";
    char const *s2 = "world !";
    char *r = ft_strjoin(s1, s2);

    printf("%s\n", r);
    free (r);
}