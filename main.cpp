/*
@author:	Diogo A. B. Fernandes
@contact:	diogoabfernandes@gmail.com
@license:	see LICENSE
*/

#include <iostream>
#include <cstdlib>
#include <fstream>

#include <cmath>
#include <limits>
#include <climits>
#include <time.h>
#include "ACO.h"

#define ITERATIONS		(int) 3
#define NUMBEROFANTS	(int) 4
#define NUMBEROFCITIES	(int) 48

// if (ALPHA == 0) { stochastic search & sub-optimal route }
#define ALPHA			(double) 0.5
// if (BETA  == 0) { sub-optimal route }
#define BETA			(double) 0.8
// Estimation of the suspected best route.
#define Q				(double) 80
// Pheromones evaporation. 
#define RO				(double) 0.2
// Maximum pheromone random number.
#define TAUMAX			(int) 2

#define INITIALCITY		(int) 0
using namespace std;

int main() {
	//clock_t time_h;
	ACO *ANTS = new ACO (NUMBEROFANTS, NUMBEROFCITIES, 
			 			ALPHA, BETA, Q, RO, TAUMAX,
			 			INITIALCITY);
	ANTS -> init();
	cout<<"start"<<endl;
	//int x,y;
	for(int i=0;i<NUMBEROFCITIES;i++)
	{
		for(int j=0;j<NUMBEROFCITIES;j++)
		{
		if(i!=j){
		ANTS -> connectCITIES (i,j);}
		}
		
		
	}

/*
	ANTS -> connectCITIES (0, 1);
	ANTS -> connectCITIES (0, 2);
	ANTS -> connectCITIES (0, 3);
	ANTS -> connectCITIES (0, 7);
	ANTS -> connectCITIES (1, 3);
	ANTS -> connectCITIES (1, 5);
	ANTS -> connectCITIES (1, 7);
	ANTS -> connectCITIES (2, 4);
	ANTS -> connectCITIES (2, 5);
	ANTS -> connectCITIES (2, 6);
	ANTS -> connectCITIES (4, 3);
	ANTS -> connectCITIES (4, 5);
	ANTS -> connectCITIES (4, 7);
	ANTS -> connectCITIES (6, 7);
	ANTS -> connectCITIES (8, 2);
	ANTS -> connectCITIES (8, 6);
	ANTS -> connectCITIES (8, 7); 

	for(int i=0;i<NUMBEROFCITIES;i++)
	{
		x= int(rand() % NUMBEROFCITIES);
		y= int(rand() % NUMBEROFCITIES);
		cout<<i<<" "<<x<<" "<<y<<endl;
		ANTS -> setCITYPOSITION ( i ,x, y);
	}

*/
/*
	ANTS -> setCITYPOSITION (0,  1,  1);
	ANTS -> setCITYPOSITION (1, 10, 10);
	ANTS -> setCITYPOSITION (2, 20, 10);
	ANTS -> setCITYPOSITION (3, 10, 30);
	ANTS -> setCITYPOSITION (4, 15,  5);
	ANTS -> setCITYPOSITION (5, 10,  1);
	ANTS -> setCITYPOSITION (6, 20, 20);
	ANTS -> setCITYPOSITION (7, 20, 30);
	//ANTS -> setCITYPOSITION(8, 26, 20);
	*/
	ANTS -> setCITYPOSITION (1, 6734, 1453);
ANTS -> setCITYPOSITION (2, 2233, 10);
ANTS -> setCITYPOSITION (3, 5530, 1424);
ANTS -> setCITYPOSITION (4, 401,841);
ANTS -> setCITYPOSITION (5, 3082 ,1644);
ANTS -> setCITYPOSITION (6, 7608 ,4458);
ANTS -> setCITYPOSITION (7, 7573 ,3716);
ANTS -> setCITYPOSITION (8, 7265 ,1268);
ANTS -> setCITYPOSITION (9, 6898 ,1885);
ANTS -> setCITYPOSITION (10, 1112, 2049);
ANTS -> setCITYPOSITION (11, 5468, 2606);
ANTS -> setCITYPOSITION (12, 5989, 2873);
ANTS -> setCITYPOSITION (13, 4706, 2674);
ANTS -> setCITYPOSITION (14, 4612, 2035);
ANTS -> setCITYPOSITION (15, 6347, 2683);
ANTS -> setCITYPOSITION (16, 6107, 669);
ANTS -> setCITYPOSITION (17, 7611, 5184);
ANTS -> setCITYPOSITION (18, 7462, 3590);
ANTS -> setCITYPOSITION (19, 7732, 4723);
ANTS -> setCITYPOSITION (20, 5900, 3561);
ANTS -> setCITYPOSITION (21, 4483, 3369);
ANTS -> setCITYPOSITION (22, 6101, 1110);
ANTS -> setCITYPOSITION (23, 5199, 2182);
ANTS -> setCITYPOSITION (24, 1633, 2809);
ANTS -> setCITYPOSITION (25, 4307, 2322);
ANTS -> setCITYPOSITION (26, 675, 1006);
ANTS -> setCITYPOSITION (27, 7555, 4819);
ANTS -> setCITYPOSITION (28, 7541, 3981);
ANTS -> setCITYPOSITION (29, 3177, 756);
ANTS -> setCITYPOSITION (30, 7352, 4506);
ANTS -> setCITYPOSITION (31, 7545, 2801);
ANTS -> setCITYPOSITION (32, 3245, 3305);
ANTS -> setCITYPOSITION (33, 6426, 3173);
ANTS -> setCITYPOSITION (34, 4608, 1198);
ANTS -> setCITYPOSITION (35, 23, 2216);
ANTS -> setCITYPOSITION (36, 7248, 3779);
ANTS -> setCITYPOSITION (37, 7762, 4595);
ANTS -> setCITYPOSITION (38, 7392, 2244);
ANTS -> setCITYPOSITION (39, 3484, 2829);
ANTS -> setCITYPOSITION (40, 6271, 2135);
ANTS -> setCITYPOSITION (41, 4985, 140);
ANTS -> setCITYPOSITION (42, 1916, 1569);
ANTS -> setCITYPOSITION (43, 7280, 4899);
ANTS -> setCITYPOSITION (44, 7509, 3239);
ANTS -> setCITYPOSITION (45, 10, 2676);
ANTS -> setCITYPOSITION (46, 6807, 2993);
ANTS -> setCITYPOSITION (47, 5185, 3258);
//ANTS -> setCITYPOSITION (48, 3023, 1942);

	ANTS -> printGRAPH ();

	ANTS -> printPHEROMONES ();

	ANTS -> optimize (ITERATIONS);

	ANTS -> printRESULTS ();
	//cout<<"total time required:"<<clock-time_h<<endl;

	return 0;
}
