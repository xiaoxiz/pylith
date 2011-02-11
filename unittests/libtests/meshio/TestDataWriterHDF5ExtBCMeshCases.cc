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

#include "TestDataWriterHDF5ExtBCMeshCases.hh" // Implementation of class methods

#include "data/DataWriterHDF5DataBCMeshTri3.hh"
#include "data/DataWriterHDF5DataBCMeshQuad4.hh"
#include "data/DataWriterHDF5DataBCMeshTet4.hh"
#include "data/DataWriterHDF5DataBCMeshHex8.hh"


// ----------------------------------------------------------------------
CPPUNIT_TEST_SUITE_REGISTRATION( pylith::meshio::TestDataWriterHDF5ExtBCMeshTri3 );
CPPUNIT_TEST_SUITE_REGISTRATION( pylith::meshio::TestDataWriterHDF5ExtBCMeshQuad4 );
CPPUNIT_TEST_SUITE_REGISTRATION( pylith::meshio::TestDataWriterHDF5ExtBCMeshTet4 );
CPPUNIT_TEST_SUITE_REGISTRATION( pylith::meshio::TestDataWriterHDF5ExtBCMeshHex8 );


// ----------------------------------------------------------------------
// Setup testing data.
void
pylith::meshio::TestDataWriterHDF5ExtBCMeshTri3::setUp(void)
{ // setUp
  TestDataWriterHDF5ExtBCMesh::setUp();
  _data = new DataWriterHDF5DataBCMeshTri3;
  _flipFault = true;
  _initialize();
} // setUp


// ----------------------------------------------------------------------
// Setup testing data.
void
pylith::meshio::TestDataWriterHDF5ExtBCMeshQuad4::setUp(void)
{ // setUp
  TestDataWriterHDF5ExtBCMesh::setUp();
  _data = new DataWriterHDF5DataBCMeshQuad4;
  _flipFault = false;
  _initialize();
} // setUp


// ----------------------------------------------------------------------
// Setup testing data.
void
pylith::meshio::TestDataWriterHDF5ExtBCMeshTet4::setUp(void)
{ // setUp
  TestDataWriterHDF5ExtBCMesh::setUp();
  _data = new DataWriterHDF5DataBCMeshTet4;
  _flipFault = false;
  _initialize();
} // setUp


// ----------------------------------------------------------------------
// Setup testing data.
void
pylith::meshio::TestDataWriterHDF5ExtBCMeshHex8::setUp(void)
{ // setUp
  TestDataWriterHDF5ExtBCMesh::setUp();
  _data = new DataWriterHDF5DataBCMeshHex8;
  _flipFault = true;
  _initialize();
} // setUp


// End of file 