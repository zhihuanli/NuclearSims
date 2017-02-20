#ifndef _planeSegment
#define _planeSegment

#include "math.h"

using namespace std;




class planeSegment
{
 public:

  planeSegment(double *n0, double * p0);
  planeSegment(double * p10, double * p20, double * p30, double * p40);
  ~planeSegment();
  int setPlaneCoordinates(double * normX0, double * normY0);
  void setBoundary(double * p10, double * p20, double * p30, double * p40);
  
 private:

  double n[3]; // define a plane by normal vector to plane, and point on the plane;
  double p[3];
  double normX[3];
  double normY[3];
  double p1[3];
  double p2[3];
  double p3[3];
  double p4[3];
  
  
};



#endif
