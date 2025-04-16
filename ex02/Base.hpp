/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maustel <maustel@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 16:23:55 by maustel           #+#    #+#             */
/*   Updated: 2025/04/16 16:23:55 by maustel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BASE_CPP__
# define __BASE_CPP__

/*
Dynamic cast requires RTTI (Run-Time Type Information), which is only
available when the base class has at least one virtual function.
Adding a virtual destructor is the simplest fix: virtual ~Base() = default or virtual ~Base(){};
*/
class Base
{
	public:
	virtual ~Base(){};
};

#endif

