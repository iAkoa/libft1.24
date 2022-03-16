/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gc_add_mal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pat <pat@student.42lyon.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 17:52:46 by pat               #+#    #+#             */
/*   Updated: 2022/03/16 12:38:23 by pat              ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../include/gc.h"
#include "../include/libft.h"

void gc_add_mal(t_track ** track, void **address)
{
	if (!(*track))
		*track = gc_lstnew(address);
	else
		gc_lstadd_front(track, gc_lstnew(address));
}