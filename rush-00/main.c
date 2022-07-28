/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feherrer <feherrer@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 12:29:54 by feherrer          #+#    #+#             */
/*   Updated: 2022/07/10 16:40:57 by feherrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int rush(int y, int x){
   char ast        = '*';
   char slash      = '/';
   char back_slash = '\\';
   char salto      = '\n';
   int inicio_x    = 1;
   char space      = ' ';
  
    while(inicio_x <= x){
      
      int inicio_y = 1;

      if (inicio_x == 1 || inicio_x == x){
      
         while(inicio_y <= y){
            if ( (inicio_y == 1 && inicio_x==1 ) || (inicio_x == x && inicio_y == y &&  y !=1 && x != 1)){
               write(1, &slash, 1);
            }
            if ( (inicio_y == y && inicio_x == 1 && y != 1)  || (inicio_x == x && inicio_y == 1 && x != 1)){
               write(1, &back_slash, 1);
            }

            if (inicio_y > 1 && inicio_y < y){
               write(1, &ast, 1);
            }
            inicio_y++;
         }

	  	}else{
			while(inicio_y <= y){
				if (inicio_y == 1 || inicio_y == y){
					write(1, &ast, 1);
				}else{
					write(1, &space, 1);
				}
				inicio_y++;
			}
		   if(inicio_y == 1 || inicio_y == y){
			   write(1, &ast, 1);
			 }
		 }
      
      write(1, &salto, 1);
      inicio_x++;
   }

   return 0;
}


int main(){
   rush(123,42);
   return 0;
}
