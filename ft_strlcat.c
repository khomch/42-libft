/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhomche <akhomche@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:17:07 by akhomche          #+#    #+#             */
/*   Updated: 2023/11/04 13:47:35 by akhomche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	j;
	size_t	len1;
	size_t	len2;

	j = 0;
	len1 = ft_strlen(dst);
	len2 = ft_strlen((char *)src);
	while (len1 + j < size)
	{
		*(dst + len1 + j) = *(src + j);
		j++;
	}
	*(dst + len1 + j) = '\0';
	return (len1 + len2);
}

// #include "libft.h"

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
//     size_t    src_len;
//     size_t    dst_len;

//     /* getting the original lenth of src and dst */
//     src_len = ft_strlen(src);
//     dst_len = ft_strlen(dst);
//     /* this check can be ommited if you implement the strnlen function */
//     if (dst_len >= dstsize)
//         dst_len = dstsize;
//     /* if the dst_len is equal to dst_size
//      * this means that we don't need to concatenate anything since
//      * the dst already contains the maximum number of characters
//      */
//     if (dst_len == dstsize)
//         return (dstsize + src_len);
//     /* if dstsize is big enough to accomodate both src and dst */
//     if (src_len < dstsize - dst_len)
//     /* we used ft_memcpy again, since it works directly on memory
//      * addresses, we can offset the pointer of dst by dst_len so our
//      * dst pointer is now set at the end of dst, then we tell ft_memcpy to
//      * copy the content of src there for a maximum of src_len + 1
//      * character
//      */
//         ft_memcpy(dst + dst_len, src, src_len + 1);
//     else
//     {
//     /* in this case, we do the same thing as above, we offset the dst
//      * pointer by dst_len and then we copy src there
//      * this time, we copy dstsize - dst_len - 1 character
//      */
//         ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
//     /* as with ft_strlcpy, we then NUL-terminate the string */
//         dst[dstsize - 1] = '\0';
//     }
//     /* finally, we return the original length of src + dst */
//     return (dst_len + src_len);
// }
