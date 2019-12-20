/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   format_float.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 12:21:19 by bhugo             #+#    #+#             */
/*   Updated: 2019/12/20 22:49:21 by edestiny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_print.h"
#include <inttypes.h>
#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#define BGD 0x8000000000000000

typedef union 			print_double
{
	long double 		a;
	struct 
	{
		unsigned long 	mant:64;
		unsigned int 	exp:15;
		char 	sign:1;
	}					sign;
	
}						s_print_double;


int main()
{
    s_print_double t;
	t.a  = 12342342.23424212;
	
	
	printf("%Lf\n", t.a);
    printf("%lu\n", t.sign.mant);
    printf("%u\n", t.sign.exp);
    printf("%u\n", t.sign.sign);

    long long arr[64] = {0};
    int j = 64;
    for (int i = 0; i < 64; i++) 
    {
        if (t.sign.mant & BGD){
            printf("%c", '1');
            arr[i] = j;
        }
        else
            printf("%c", '0');
        
        t.sign.mant <<= 1;
        j--;
        
    }
    printf("%c", '\n');
    for (int i = 0; i < 64; i++)
        printf("%lli\n", arr[i]2);
        
	return 0;	
}