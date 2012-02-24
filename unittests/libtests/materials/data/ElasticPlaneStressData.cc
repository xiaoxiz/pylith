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
// This file was generated from python application elasticplanestrain.

#include "ElasticPlaneStressData.hh"

const int pylith::materials::ElasticPlaneStressData::_dimension = 2;

const int pylith::materials::ElasticPlaneStressData::_numLocs = 2;

const int pylith::materials::ElasticPlaneStressData::_numProperties = 3;

const int pylith::materials::ElasticPlaneStressData::_numStateVars = 0;

const int pylith::materials::ElasticPlaneStressData::_numDBProperties = 3;

const int pylith::materials::ElasticPlaneStressData::_numDBStateVars = 0;

const int pylith::materials::ElasticPlaneStressData::_numPropsQuadPt = 3;

const int pylith::materials::ElasticPlaneStressData::_numVarsQuadPt = 0;

const PylithScalar pylith::materials::ElasticPlaneStressData::_lengthScale =   1.00000000e+03;

const PylithScalar pylith::materials::ElasticPlaneStressData::_timeScale =   1.00000000e+00;

const PylithScalar pylith::materials::ElasticPlaneStressData::_pressureScale =   2.25000000e+10;

const PylithScalar pylith::materials::ElasticPlaneStressData::_densityScale =   1.00000000e+03;

const PylithScalar pylith::materials::ElasticPlaneStressData::_dtStableImplicit =   1.00000000e+99;

const int pylith::materials::ElasticPlaneStressData::_numPropertyValues[] = {
1,
1,
1,
};

const int* pylith::materials::ElasticPlaneStressData::_numStateVarValues = 0;

const char* pylith::materials::ElasticPlaneStressData::_dbPropertyValues[] = {
"density",
"vs",
"vp",
};

const char** pylith::materials::ElasticPlaneStressData::_dbStateVarValues = 0;

const PylithScalar pylith::materials::ElasticPlaneStressData::_dbProperties[] = {
  2.50000000e+03,
  3.00000000e+03,
  5.19615242e+03,
  2.00000000e+03,
  1.20000000e+03,
  2.07846097e+03,
};

const PylithScalar* pylith::materials::ElasticPlaneStressData::_dbStateVars = 0;

const PylithScalar pylith::materials::ElasticPlaneStressData::_properties[] = {
  2.50000000e+03,
  2.25000000e+10,
  2.25000000e+10,
  2.00000000e+03,
  2.88000000e+09,
  2.88000000e+09,
};

const PylithScalar* pylith::materials::ElasticPlaneStressData::_stateVars = 0;

const PylithScalar pylith::materials::ElasticPlaneStressData::_propertiesNondim[] = {
  2.50000000e+00,
  1.00000000e+00,
  1.00000000e+00,
  2.00000000e+00,
  1.28000000e-01,
  1.28000000e-01,
};

const PylithScalar* pylith::materials::ElasticPlaneStressData::_stateVarsNondim = 0;

const PylithScalar pylith::materials::ElasticPlaneStressData::_density[] = {
  2.50000000e+03,
  2.00000000e+03,
};

const PylithScalar pylith::materials::ElasticPlaneStressData::_strain[] = {
  1.10000000e-04,
  1.20000000e-04,
  1.30000000e-04,
  4.10000000e-04,
  4.20000000e-04,
  4.30000000e-04,
};

const PylithScalar pylith::materials::ElasticPlaneStressData::_stress[] = {
 -1.49790000e+07,
 -1.49780000e+07,
 -8.97700000e+06,
 -1.86900000e+06,
 -1.86800000e+06,
 -1.09900000e+06,
};

const PylithScalar pylith::materials::ElasticPlaneStressData::_elasticConsts[] = {
  6.00000000e+10,
  1.50000000e+10,
  0.00000000e+00,
  1.50000000e+10,
  6.00000000e+10,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  4.50000000e+10,
  7.68000000e+09,
  1.92000000e+09,
  0.00000000e+00,
  1.92000000e+09,
  7.68000000e+09,
  0.00000000e+00,
  0.00000000e+00,
  0.00000000e+00,
  5.76000000e+09,
};

const PylithScalar pylith::materials::ElasticPlaneStressData::_initialStress[] = {
  2.10000000e+04,
  2.20000000e+04,
  2.30000000e+04,
  5.10000000e+04,
  5.20000000e+04,
  5.30000000e+04,
};

const PylithScalar pylith::materials::ElasticPlaneStressData::_initialStrain[] = {
  3.10000000e-04,
  3.20000000e-04,
  3.30000000e-04,
  6.10000000e-04,
  6.20000000e-04,
  6.30000000e-04,
};

const PylithScalar* pylith::materials::ElasticPlaneStressData::_stateVarsUpdated = 0;

pylith::materials::ElasticPlaneStressData::ElasticPlaneStressData(void)
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

pylith::materials::ElasticPlaneStressData::~ElasticPlaneStressData(void)
{}


// End of file
