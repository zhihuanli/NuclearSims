#ifndef momDist_
#define momDist_

#include "random.h"
#include <fstream>
#include <iostream>

using namespace std;

/**
 *!\brief transverse momentum distribution of parent
 *
 *Mote Carlo sampling of the transverse momentum
 *distribution predicted by Bec
 */
class CMomDist
{
 public:
  static CRandom random;
  static int const n;
  float * xArraytr;
  float * yArraytr;
  float * xArrayz;
  float * yArrayz;
  CMomDist();
  ~CMomDist();
  float getTransMom();
  float getLongMom();

 
};

#endif
