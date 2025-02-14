/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Namespace.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 10:43:05 by arabefam          #+#    #+#             */
/*   Updated: 2025/02/14 10:48:30 by arabefam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	g_val = 42;
int	foo(void) {return 1;}

namespace FirstNamespace
{
	int	g_val = 21;
	int	foo(void) {return 2;}
}

int	main(void)
{
	printf("::g_val = [%d]\n", ::g_val);
	printf("::foo() = [%d]\n", ::foo());
	printf("FirstNamespace::g_val = [%d]\n", FirstNamespace::g_val);
	printf("FirstNamespace::foo() = [%d]\n", FirstNamespace::foo());
}
