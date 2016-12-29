/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ariard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/28 17:21:25 by ariard            #+#    #+#             */
/*   Updated: 2016/12/29 20:01:16 by ariard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

/*
**Find length of string
*/

size_t				ft_strlen(const char *s);

/*
** Find length of string until 'c' character
*/

size_t				ft_strlenchr(const char *s, char c);

/*
** Save a copy of a string
*/

char				*ft_strdup(const char *s1);

/*
** Copy string
*/

char				*ft_strcpy(char *dst, const char *src);

/*
** Copy string at most 'len' chacracters
*/

char				*ft_strncpy(char *dst, const char *src, size_t len);

/*
** Copy string until 'c' character
*/

char				*ft_strchrcpy(char *dst, const char *src, char c);

/*
** Concatenate strings
*/

char				*ft_strcat(char *s1, const char *s2);

/*
** Concatenate strings at most 'n' characters
*/

char				*ft_strncat(char *s1, const char *s2, size_t n);

/*
** Concatenate strings at most size of the buffer
*/

size_t				ft_strlcat(char *dst, const char *src, size_t size);

/*
** Locate first character in string
*/

char				*ft_strchr(const char *s, int c);

/*
** Locate last character in string
*/

char				*ft_strrchr(const char *s, int c);

/*
** Reverse string
*/

void				ft_strrev(char *s);

/*
** Locate a substring in a string
*/

char				*ft_strstr(const char *big, const char *little);

/*
** Locate a substring in a string at most 'len' characters
*/

char				*ft_strnstr(const char *big, const char *little,
	size_t len);

/*
** Compare strings
*/

int					ft_strcmp(const char *s1, const char *s2);

/*
** Compare strings at most 'n' characters
*/

int					ft_strncmp(const char *s1, const char *s2, size_t n);

/*
** Alphabetic character test
*/

int					ft_isalpha(int c);

/*
** Decimal-digit test
*/

int					ft_isdigit(int c);

/*
** Alphanumeric character test
*/

int					ft_isalnum(int c);

/*
** ASCII character test
*/

int					ft_isascii(int c);

/*
** Printing character test
*/

int					ft_isprint(int c);

/*
** Lower case to upper case letter conversion
*/

int					ft_toupper(int c);

/*
** Upper case to lower case letter conversion
*/

int					ft_tolower(int c);

/*
** Allocate new string
*/

char				*ft_strnew(size_t size);

/*
** Destroy string
*/

void				ft_strdel(char **as);

/*
** Clear string
*/

void				ft_strclr(char *as);

/*
** Call function for each character of string
*/

void				ft_striter(char *s, void (*f)(char *));

/*
** Call function for each character of string with index
*/

void				ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** Call function for each character of string and return a new one
*/

char				*ft_strmap(char const *s, char (*f)(char));

/*
** Call function for each character of string and return a new one with index
*/

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*
** Return a new substring located from a string
*/

char				*ft_strsub(char const *s, unsigned int start, size_t len);

/*
** Return a new string from two others
*/

char				*ft_strjoin(char const *s1, char const *s2);

/*
** Return a new string from an old one without whitespaces
*/

char				*ft_strtrim(char const *s);

/*
** Return a tab of new strings from an old one splited by 'c' character
*/

char				**ft_strsplit(char const *s, char c);

/*
** Return the length of a wchar
*/

size_t				ft_sizewchar(wchar_t w);

#endif
