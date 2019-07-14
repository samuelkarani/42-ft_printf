/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smbaabu <smbaabu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 22:10:07 by smbaabu           #+#    #+#             */
/*   Updated: 2019/07/14 12:28:55 by smbaabu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_fprintf(FILE *restrict stream, const char *restrict format, ...)
{
	va_list	args;
	char	buf[BUF_SIZE];
	int		count;

	va_start(args, format);
	count = ft_print(buf, args, format);
	va_end(args);
	return (write(fileno(stream), buf, count));
}

int	ft_sprintf(char *restrict str, const char *restrict format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_print(str, args, format);
	str[(count > MAX_INT ? MAX_INT : count) - 1] = 0;
	va_end(args);
	return (count);
}

int	ft_snprintf(char *restrict str, size_t size,
	const char *restrict format, ...)
{
	va_list	args;
	int		count;

	va_start(args, format);
	count = ft_print(str, args, format);
	str[size - 1] = 0;
	va_end(args);
	return (count);
}

int	ft_asprintf(char **ret, const char *format, ...)
{
	va_list	args;
	int		count;

	*ret = malloc((BUF_SIZE) * sizeof(char));
	if (!*ret)
	{
		*ret = NULL;
		return (-1);
	}
	va_start(args, format);
	count = ft_print(*ret, args, format);
	va_end(args);
	return (count);
}

int	ft_dprintf(int fd, const char *restrict format, ...)
{
	va_list	args;
	char	buf[BUF_SIZE];
	int		count;

	va_start(args, format);
	count = ft_print(buf, args, format);
	va_end(args);
	return (write(fd, buf, count));
}
