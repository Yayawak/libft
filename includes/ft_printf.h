/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avondale <avondale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 22:45:29 by avondale          #+#    #+#             */
/*   Updated: 2023/05/14 22:13:23 by avondale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "libft.h"

enum flagEnum
{
    str,
    chr
};

// -.-'-.-'-.-'-.-'-.-'-.-'-.-'MACROS-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-
# define FLAGS          "-+#0 "
# define ALL_FLAGS      "-+#0 *.0123456789lh"
# define SPECIFIERS     "cspdiuxX%onfge"
# define DIGITS         "0123456789"
# define HEXALOWER      "0123456789abcdef"
# define HEXAUPPER      "0123456789ABCDEF"
# define OCTAL          "01234567"

typedef struct  specifier_flags
// struct  specifier_flags
{
    // all collected format sepecifiers
    char                set[20];
    // (%c %s %p %d %i) -> specifier character
    char                spf_c;
    char                sign;



    char                *tmp;
    int                 size;
    size_t              strlen;
}   flags;


// -.-'-.-'-.-'-.-'-.-'-.-'-.-'FUNCTIONS HELPERS-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-.-'-

int             ft_printf(const char *format, ...);

void            print_spcf_c();
void            print_spcf_s();
void            print_spcf_pct();


void            print_flags(int *len, flags flag);

#endif
