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

    ptr_s1 = (char *)s1;
    ptr_s2 = (char *)s2;
    s1_len = ft_strlen(ptr_s1);
    s2_len = ft_strlen(ptr_s2);
    ptr = malloc(s1_len + s2_len + 1);

    

}