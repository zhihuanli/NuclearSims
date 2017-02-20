#include "planeSegment.h"

//planes are defined by normal vector and then a point on the plane
//to get a proper plane segment one needs the boundaries of the plane 

planeSegment::planeSegment(double * p10, double * p20, double * p30, double * p40)
{

  double cross1[3];
  double cross2[3];

  //finding normal vector via cross product
  for (int i=0;i<3;i++)
    {
      cross1[i] = p20[i] - p10[i];
      cross2[i] = p40[i] - p30[i];
    }
  
  n[0] = cross1[1]*cross2[2] - cross1[2]*cross2[1];
  n[1] = cross1[2]*cross2[0] - cross1[0]*cross2[2];
  n[2] = cross1[0]*cross2[1] - cross1[1]*cross2[0];

  double mag=0.;

  for (int i=0;i<3;i++)
    {
      mag += pow(n[i],2.);
    }

  mag = sqrt(mag);

  //normalizing normal vector and setting plane point;
  for(int i=0;i<3;i++)
    {
      n[i] = n[i]/mag;
      p[i] = p10[i];
    }

  setBoundary(p10,p20,p30,p40);
  
}

planeSegment::planeSegment(double * n0, double * p0)
{

  for (int i=0;i<3;i++)
    {
      n[i] = n0[i];
      p[i] = p0[i];
    }

  cout << "plane segment is unbounded i.e. is full plane" << endl;

}


int planeSegment::setPlaneCoordinates(double * normX0, double * normY0);
{

  for (int i = 0;i<3;i++)
    {
      normX[i] = normX0[i];
      normY[i] = normY0[i];
    }

  return 1;
  
}


void planeSegment::setBoundary(double *p10, double * p20, double * p30, double * p40)
{
  for(int i=0;i<3;i++)
    {
      p1[i] = p10[i];
      p2[i] = p20[i];
      p3[i] = p30[i];
      p4[i] = p40[i];
    }

}
