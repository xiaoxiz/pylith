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
// This file was generated from python application elasticitylgdeformexplicitapp.

#include "ElasticityExplicitLgDeformData3DLinear.hh"

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_spaceDim = 3;

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_cellDim = 3;

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_numVertices = 4;

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_numCells = 1;

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_numBasis = 4;

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_numQuadPts = 1;

const char* pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_matType = "ElasticIsotropic3D";

const char* pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_matDBFilename = "data/elasticisotropic3d.spatialdb";

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_matId = 0;

const char* pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_matLabel = "elastic isotropic 3-D";

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_dt =   1.00000000e-02;

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_gravityVec[] = {
  0.00000000e+00,  0.00000000e+00, -1.00000000e+08,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_vertices[] = {
 -5.00000000e-01, -1.00000000e+00, -5.00000000e-01,
  2.00000000e+00, -5.00000000e-01, -4.00000000e-01,
  1.00000000e+00, -1.00000000e-01, -3.00000000e-01,
 -2.00000000e-01,  5.00000000e-01,  2.00000000e+00,
};

const int pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_cells[] = {
0,1,2,3,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_verticesRef[] = {
 -1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
  1.00000000e+00, -1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00,  1.00000000e+00, -1.00000000e+00,
 -1.00000000e+00, -1.00000000e+00,  1.00000000e+00,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_quadPts[] = {
 -5.00000000e-01, -5.00000000e-01, -5.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_quadWts[] = {
  1.33333333e+00,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_basis[] = {
  2.50000000e-01,  2.50000000e-01,  2.50000000e-01,
  2.50000000e-01,};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_basisDerivRef[] = {
 -5.00000000e-01, -5.00000000e-01, -5.00000000e-01,
  5.00000000e-01,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  5.00000000e-01,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  5.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_fieldTIncr[] = {
  3.00000000e-01,  2.00000000e-01, -5.00000000e-01,
 -3.00000000e-01, -4.00000000e-01, -6.00000000e-01,
  2.00000000e-01,  6.00000000e-01,  3.00000000e-01,
 -6.00000000e-01, -1.00000000e-01, -3.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_fieldT[] = {
  8.00000000e-01,  1.00000000e-01, -6.00000000e-01,
 -1.00000000e-01, -2.00000000e-01, -5.00000000e-01,
  1.00000000e-01,  7.00000000e-01,  2.00000000e-01,
 -5.00000000e-01, -0.00000000e+00, -2.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_fieldTmdt[] = {
  1.00000000e-01,  1.00000000e-01, -3.00000000e-01,
 -2.00000000e-01, -1.00000000e-01, -5.00000000e-01,
  2.00000000e-01,  4.00000000e-01,  1.00000000e-01,
 -4.00000000e-01, -1.00000000e-01, -1.00000000e-01,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_valsResidual[] = {
 -1.33659352e+10,  3.00655421e+11,  1.48221233e+11,
 -5.48900483e+10,  6.55599721e+11,  3.04460965e+11,
  6.45910023e+10, -1.06342951e+12, -4.86426871e+11,
  3.66834369e+09,  1.07174373e+11,  3.37473630e+10,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_valsJacobian[] = {
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  8.40625000e+05,  0.00000000e+00,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  8.40625000e+05,  0.00000000e+00,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
  0.00000000e+00,  0.00000000e+00,  8.40625000e+05,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_valsResidualLumped[] = {
 -1.33654308e+10,  3.00654749e+11,  1.48221233e+11,
 -5.48895440e+10,  6.55600730e+11,  3.04462310e+11,
  6.45891529e+10, -1.06343052e+12, -4.86428216e+11,
  3.66918432e+09,  1.07175045e+11,  3.37473630e+10,
};

const PylithScalar pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::_valsJacobianLumped[] = {
  3.36250000e+06,  3.36250000e+06,  3.36250000e+06,
  3.36250000e+06,  3.36250000e+06,  3.36250000e+06,
  3.36250000e+06,  3.36250000e+06,  3.36250000e+06,
  3.36250000e+06,  3.36250000e+06,  3.36250000e+06,
};

pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::ElasticityExplicitLgDeformData3DLinear(void)
{ // constructor
  spaceDim = _spaceDim;
  cellDim = _cellDim;
  numVertices = _numVertices;
  numCells = _numCells;
  numBasis = _numBasis;
  numQuadPts = _numQuadPts;
  matType = const_cast<char*>(_matType);
  matDBFilename = const_cast<char*>(_matDBFilename);
  matId = _matId;
  matLabel = const_cast<char*>(_matLabel);
  dt = _dt;
  gravityVec = const_cast<PylithScalar*>(_gravityVec);
  vertices = const_cast<PylithScalar*>(_vertices);
  cells = const_cast<int*>(_cells);
  verticesRef = const_cast<PylithScalar*>(_verticesRef);
  quadPts = const_cast<PylithScalar*>(_quadPts);
  quadWts = const_cast<PylithScalar*>(_quadWts);
  basis = const_cast<PylithScalar*>(_basis);
  basisDerivRef = const_cast<PylithScalar*>(_basisDerivRef);
  fieldTIncr = const_cast<PylithScalar*>(_fieldTIncr);
  fieldT = const_cast<PylithScalar*>(_fieldT);
  fieldTmdt = const_cast<PylithScalar*>(_fieldTmdt);
  valsResidual = const_cast<PylithScalar*>(_valsResidual);
  valsJacobian = const_cast<PylithScalar*>(_valsJacobian);
  valsResidualLumped = const_cast<PylithScalar*>(_valsResidualLumped);
  valsJacobianLumped = const_cast<PylithScalar*>(_valsJacobianLumped);
} // constructor

pylith::feassemble::ElasticityExplicitLgDeformData3DLinear::~ElasticityExplicitLgDeformData3DLinear(void)
{}


// End of file
