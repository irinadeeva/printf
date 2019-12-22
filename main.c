/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhugo <bhugo@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/15 19:02:30 by bhugo             #+#    #+#             */
/*   Updated: 2019/12/22 22:33:06 by bhugo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"
#include <stdio.h>
#include <math.h>


int main(void)
{
    printf("first\n");
    printf("%+.f\n", 0.);
    ft_printf("%+.f\n", 0.);

    printf("\nsecond\n");
    printf("% .f\n", 0.);
    ft_printf("% .f\n", 0.);

    printf("\nthird\n");
    printf("%# -6.f\n", 42.0);
    ft_printf("%#.1f\n", 42.0);

    return (0);
}
