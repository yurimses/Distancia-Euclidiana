/*
*       dist euclid is a generator of events
*       Copyright (c) 2019 Yuri M. Ses <your-email@icen.ufpa.br>
*       Copyright (c) 2019 Marlon W. Santos <marlon.santos.santos@icen.ufpa.br>
*
*
*    This program is free software: you can redistribute it and/or modify
*    it under the terms of the GNU General Public License as published by
*    the Free Software Foundation, either version 3 of the License, or
*    (at your option) any later version.
*
*    This program is distributed in the hope that it will be useful,
*    but WITHOUT ANY WARRANTY; without even the implied warranty of
*    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*    GNU General Public License for more details.
*
*    You should have received a copy of the GNU General Public License
*    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <math.h>
#include "eventos.h"
#include "coordenadas.h"

unsigned int fun_dist_euclid(unsigned int difx, unsigned int dify, unsigned int difz){
	return sqrt(pow(difx, 2) + pow(dify, 2) +pow(difz, 2));
}

unsigned int distance(unsigned int x,unsigned int y,unsigned int z,int event_count){
     
  unsigned int difX;
  unsigned int difY;
  unsigned int difZ;
  unsigned int result;

	difX = x - (unsigned int)(eventos_coordenadas[count_event][0]*100);
	difY = y - (unsigned int)(eventos_coordenadas[count_event][1]*100);
	difZ = z - (unsigned int)(eventos_coordenadas[count_event][2]*100);

  
 result=fun_dist_euclid(difX,difY,difZ);

  return result;
}
