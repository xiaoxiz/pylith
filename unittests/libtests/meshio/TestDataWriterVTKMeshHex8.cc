// -*- C++ -*-
//
// ----------------------------------------------------------------------
//
// Brad T. Aagaard, U.S. Geological Survey
// Charles A. Williams, GNS Science
// Matthew G. Knepley, University of Chicago
//
// This code was developed as part of the Computational Infrastructure
// for Geodynamics (http://geodynamics.org).
//
// Copyright (c) 2010 University of California, Davis
//
// See COPYING for license information.
//
// ----------------------------------------------------------------------
//

#include <portinfo>

#include "TestDataWriterVTKMeshHex8.hh" // Implementation of class methods

#include "data/DataWriterVTKDataMeshHex8.hh" // USES DataWriterVTKDataMeshHex8

// ----------------------------------------------------------------------
CPPUNIT_TEST_SUITE_REGISTRATION( pylith::meshio::TestDataWriterVTKMeshHex8 );

// ----------------------------------------------------------------------
// Setup testing data.
void
pylith::meshio::TestDataWriterVTKMeshHex8::setUp(void)
{ // setUp
  TestDataWriterVTKMesh::setUp();
  _data = new DataWriterVTKDataMeshHex8;
  _flipFault = true;

  _initialize();
} // setUp


// End of file 