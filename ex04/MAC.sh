# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghazari <mghazari@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/08 06:39:23 by mghazari          #+#    #+#              #
#    Updated: 2016/11/08 06:39:58 by mghazari         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig -a | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'