# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 06:39:23 by mghazari          #+#    #+#              #
#    Updated: 2016/12/05 10:23:08 by mghazari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig | grep "ether" | sed 's/\(.*\)ether //g'
