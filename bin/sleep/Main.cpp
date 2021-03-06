/*
 * Copyright (C) 2012 Felipe Cabrera, 2015 Dan Rulos
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if(argc < 2) {
        printf("uso: %s SEGUNDOS\n", argv[0]);
        return EXIT_FAILURE;
    }
    int s = atoi(argv[1]);
        
    if (s >= 0) {
	sleep(atoi(argv[1]));
	printf("\n");

	return EXIT_SUCCESS;
    }
    else {
	printf("Error: %d\n", s);
	return EXIT_FAILURE;
    }
}
