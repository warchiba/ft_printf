/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:37:10 by warchiba          #+#    #+#             */
/*   Updated: 2020/08/01 17:41:54 by warchiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSER_H
# define PARSER_H

# define FLG_NONE   0b00000000
# define FLG_MINUS  0b00000001
# define FLG_PLUS   0b00000010
# define FLG_SPACE  0b00000100
# define FLG_HASH   0b00001000
# define FLG_ZERO   0b00010000
# define SIZE_NONE  0
# define SIZE_H     1
# define SIZE_HH    2
# define SIZE_L     3
# define SIZE_LL    4
# define SIZE_LB    5

typedef	struct
{
	unsigned char	flags;
	int				is_width;
	long long int	width;
	int				is_precision;
	long long int	precision;
	char			type;
	int				size;
	int				char_zero;
}					t_format;

t_format			parser(int *k, const char *line, va_list *ap);
void				init(t_format *form);
int					is_there_any_flag(const int i, const char *line);
void				add_flag(char c, t_format *res);

#endif
