#include <iostream> 
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>

using namespace std;

typedef struct {

	double x; 
	double y;

} Point;

class ApproximatePI{

	public:

		double estimate(vector<Point>&pts) {   //approximate  pi using a giving points 
			
			double pi; 
			int nbr_pts_includ;

			Point coordPoint;

			if (pts.empty()){

				cout <<"Vector pts is empty"<<endl;
			
			}else {

				for (int i=1; i<pts.size(); i++){
					
					coordPoint = pts[i];

					if (pow(coordPoint.x,2) + pow(coordPoint.y,2)<=1){ 
						nbr_pts_includ++;
					}
				}

				pi = 4 * ((double)nbr_pts_includ / (double)(pts.size()));
			}

			return pi;
		}


};



int main(int argc, char* argv[])
{
	double approxPi;
	
	ApproximatePI approx;
	
	vector<Point> rands;
	
	for (int i =1; i<100000; i++){
		
		Point p;
		p.x = rand() /(double)RAND_MAX; 
		p.y = rand() /(double)RAND_MAX;
		rands.push_back(p);
	} 

	approxPi = approx.estimate(rands);

	cout<< " Approximate value of pi is "<< approxPi <<endl; // pi= 3.13739

		
	return 0;
}