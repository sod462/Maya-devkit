#ifndef _MStreamUtils
#define _MStreamUtils
//-
// ==========================================================================
// Copyright (C) 1995 - 2006 Autodesk, Inc., and/or its licensors.  All
// rights reserved.
//
// The coded instructions, statements, computer programs, and/or related
// material (collectively the "Data") in these files contain unpublished
// information proprietary to Autodesk, Inc. ("Autodesk") and/or its
// licensors,  which is protected by U.S. and Canadian federal copyright law
// and by international treaties.
//
// The Data may not be disclosed or distributed to third parties or be
// copied or duplicated, in whole or in part, without the prior written
// consent of Autodesk.
//
// The copyright notices in the Software and this entire statement,
// including the above license grant, this restriction and the following
// disclaimer, must be included in all copies of the Software, in whole
// or in part, and all derivative works of the Software, unless such copies
// or derivative works are solely in the form of machine-executable object
// code generated by a source language processor.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
// AUTODESK DOES NOT MAKE AND HEREBY DISCLAIMS ANY EXPRESS OR IMPLIED
// WARRANTIES INCLUDING, BUT NOT LIMITED TO, THE WARRANTIES OF
// NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE,
// OR ARISING FROM A COURSE OF DEALING, USAGE, OR TRADE PRACTICE. IN NO
// EVENT WILL AUTODESK AND/OR ITS LICENSORS BE LIABLE FOR ANY LOST
// REVENUES, DATA, OR PROFITS, OR SPECIAL, DIRECT, INDIRECT, OR
// CONSEQUENTIAL DAMAGES, EVEN IF AUTODESK AND/OR ITS LICENSORS HAS
// BEEN ADVISED OF THE POSSIBILITY OR PROBABILITY OF SUCH DAMAGES.
// ==========================================================================
//+
//
// CLASS:    MStreamUtils
//
// ****************************************************************************

#if defined __cplusplus

// ****************************************************************************
// INCLUDED HEADER FILES

#include <maya/MIOStreamFwd.h>

// ****************************************************************************
// DECLARATIONS

class MStatus;

// ****************************************************************************
// CLASS DECLARATION (MStreamUtils)

//! \ingroup OpenMaya
//! \brief Stream functionality. 
/*!
This class provides some standard stream functionality for developers
working in C++ or script. Write methods are provided for writing to
ASCII or binary.  Read methods are only binary.
*/
class OPENMAYA_EXPORT MStreamUtils
{
public:

	static std::ostream& stdErrorStream();
	static std::ostream& stdOutStream();

	static MStatus writeChar( std::ostream& out, const char value, bool binary = false );
	static MStatus writeCharBuffer( std::ostream& out, const char* value, bool binary = false );
	static MStatus writeInt( std::ostream& out, const int value, bool binary = false );
	static MStatus writeFloat( std::ostream& out, const float value, bool binary = false );
	static MStatus writeDouble( std::ostream& out, const double value, bool binary = false );

	static MStatus readChar( std::istream& in, char& value, bool binary = false );
	static MStatus readCharBuffer( std::istream& in, char*& value, unsigned int length, bool binary = false );
	static MStatus readInt( std::istream& in, int& value, bool binary = false );
	static MStatus readFloat( std::istream& in, float& value, bool binary = false );
	static MStatus readDouble( std::istream& in, double& value, bool binary = false );

protected:
// No protected members
private:
// No protected members
};

#endif  // __cplusplus
#endif // _MStreamUtils