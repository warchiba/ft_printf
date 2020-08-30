/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   processor.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: warchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/01 12:37:10 by warchiba          #+#    #+#             */
/*   Updated: 2020/08/01 17:41:54 by warchiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROCESSOR_H
# define PROCESSOR_H

char	*processor(t_format *form, va_list *ap);
void	finish_str(char *str, va_list *ap);
void	finish(va_list *ap);
char	*zero_string(va_list *ap);
char	*add_precision_int(char *str, long unsigned int k, va_list *ap);
char	*add_width_int_right(char *str, char *result, long unsigned int len);
char	*add_width_int(char *str, t_format form, va_list *ap);
char	*add_width_int_left(char *str, char *result,
		long unsigned int len, long unsigned int flags);
char	*add_sign_int(char *str, char c, va_list *ap);
char	*add_space_int(char *str, va_list *ap);
char	*processor_int(t_format *form, va_list *ap);
char	*processor_u(t_format *form, va_list *ap);
char	*add_alternative_form_x(char *str, va_list *ap);
char	*processor_x(t_format *form, va_list *ap);
char	*processor_xx(t_format *form, va_list *ap);
char	*processor_o(t_format *form, va_list *ap);
char	*add_width_string_left(char *result, char *str, unsigned int len);
char	*add_width_string_right(char *result, char *str, unsigned int len);
char	*add_width_string(char *str, t_format form, va_list *ap);
char	*add_precision_string(char *str, unsigned int len, va_list *ap);
char	*processor_string(t_format *form, va_list *ap);
char	*processor_char(t_format *form, va_list *ap);
char	*processor_p(t_format *form, va_list *ap);
char	*processor_f(t_format *form, va_list *ap);
char	*add_digit(char *str, va_list *ap);
char	*add_round(char *str, va_list *ap);
char	*add_point(char *str, va_list *ap);

#endif
