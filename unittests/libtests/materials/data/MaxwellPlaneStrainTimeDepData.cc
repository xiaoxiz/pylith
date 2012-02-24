// -*- C++ -*-
//
// ======================================================================
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010-2012 University of California, Davis
//
// See COPYING for license information.
//
// ======================================================================
//

// DO NOT EDIT THIS FILE
// This file was generated from python application maxwellplanestraintimedep.

#include "MaxwellPlaneStrainTimeDepData.hh"

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_dimension = 2;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numLocs = 2;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numProperties = 4;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numStateVars = 3;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numDBProperties = 4;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numDBStateVars = 8;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numPropsQuadPt = 4;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numVarsQuadPt = 8;

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_densityScale =   1.00000000e+03;

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_dtStableImplicit =   8.88888889e+06;

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numPropertyValues[] = {
1,
1,
1,
1,
};

const int pylith::materials::MaxwellPlaneStrainTimeDepData::_numStateVarValues[] = {
1,
3,
4,
};

const char* pylith::materials::MaxwellPlaneStrainTimeDepData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
"viscosity",
};

const char* pylith::materials::MaxwellPlaneStrainTimeDepData::_dbStateVarValues[] = {
"stress-zz-initial",
"total-strain-xx",
"total-strain-yy",
"total-strain-xy",
"viscous-strain-xx",
"viscous-strain-yy",
"viscous-strain-zz",
"viscous-strain-xy",
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  1.00000000e+18,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
  1.00000000e+19,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_dbStateVars[] = {
  2.00000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.00000000e+04,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  4.44444444e+07,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
  3.47222222e+09,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_stateVars[] = {
  2.00000000e+04,
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  5.00000000e+04,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_propertiesNondim[] = {
  2.50000000e+00,
  1.00000000e+00,
  1.00000000e+00,
  4.44444444e+07,
  2.00000000e+00,
  1.28000000e-01,
  1.28000000e-01,
  3.47222222e+09,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_stateVarsNondim[] = {
  8.88888889e-07,
  1.10000000e-04,
  1.20000000e-04,
  1.40000000e-04,
  3.33333333e-05,
  4.33333333e-05,
 -7.66666667e-05,
  1.40000000e-04,
  2.22222222e-06,
  4.10000000e-04,
  4.20000000e-04,
  4.40000000e-04,
  1.33333333e-04,
  1.43333333e-04,
 -2.76666667e-04,
  4.40000000e-04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_strain[] = {
  1.20000000e-04,
  1.30000000e-04,
  1.50000000e-04,
  4.20000000e-04,
  4.30000000e-04,
  4.50000000e-04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_stress[] = {
  7.82142817e+06,
  8.31540772e+06,
  5.25970271e+06,
  4.21255521e+06,
  4.26539189e+06,
  2.26569236e+06,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_elasticConsts[] = {
  6.74326010e+10,
  2.25336994e+10,
  0.00000000e+00,
  2.25336989e+10,
  6.74326010e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.48989011e+10,
  8.63988977e+09,
  2.88005546e+09,
  0.00000000e+00,
  2.88005546e+09,
  8.63988977e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.75983408e+09,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.40000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.40000000e+04,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_initialStrain[] = {
  3.60000000e-05,
  3.50000000e-05,
  3.30000000e-05,
  6.10000000e-05,
  6.20000000e-05,
  6.60000000e-05,
};

const PylithScalar pylith::materials::MaxwellPlaneStrainTimeDepData::_stateVarsUpdated[] = {
  2.00000000e+04,
  1.20000000e-04,
  1.30000000e-04,
  1.50000000e-04,
  3.65095149e-05,
  4.64646160e-05,
 -8.29741309e-05,
  1.49348949e-04,
  5.00000000e+04,
  4.20000000e-04,
  4.30000000e-04,
  4.50000000e-04,
  1.36658891e-04,
  1.46658315e-04,
 -2.83317206e-04,
  4.49974369e-04,
};

pylith::materials::MaxwellPlaneStrainTimeDepData::MaxwellPlaneStrainTimeDepData(void)
{ // constructor
  dimension = _dimension;
  numLocs = _numLocs;
  numProperties = _numProperties;
  numStateVars = _numStateVars;
  numDBProperties = _numDBProperties;
  numDBStateVars = _numDBStateVars;
  numPropsQuadPt = _numPropsQuadPt;
  numVarsQuadPt = _numVarsQuadPt;
  lengthScale = _lengthScale;
  timeScale = _timeScale;
  pressureScale = _pressureScale;
  densityScale = _densityScale;
  dtStableImplicit = _dtStableImplicit;
  numPropertyValues = const_cast<int*>(_numPropertyValues);
  numStateVarValues = const_cast<int*>(_numStateVarValues);
  dbPropertyValues = const_cast<char**>(_dbPropertyValues);
  dbStateVarValues = const_cast<char**>(_dbStateVarValues);
  dbProperties = const_cast<PylithScalar*>(_dbProperties);
  dbStateVars = const_cast<PylithScalar*>(_dbStateVars);
  properties = const_cast<PylithScalar*>(_properties);
  stateVars = const_cast<PylithScalar*>(_stateVars);
  propertiesNondim = const_cast<PylithScalar*>(_propertiesNondim);
  stateVarsNondim = const_cast<PylithScalar*>(_stateVarsNondim);
  density = const_cast<PylithScalar*>(_density);
  strain = const_cast<PylithScalar*>(_strain);
  stress = const_cast<PylithScalar*>(_stress);
  elasticConsts = const_cast<PylithScalar*>(_elasticConsts);
  initialStress = const_cast<PylithScalar*>(_initialStress);
  initialStrain = const_cast<PylithScalar*>(_initialStrain);
  stateVarsUpdated = const_cast<PylithScalar*>(_stateVarsUpdated);
} // constructor

pylith::materials::MaxwellPlaneStrainTimeDepData::~MaxwellPlaneStrainTimeDepData(void)
{}


// End of file
