#pragma once

enum {
	A,
	B,
	C,
	M,
	P,
	R,
	S
};



#include "windows.h"
#include <iostream>
#include <string>
//for using std and system strings incompatible
#include <msclr\marshal_cppstd.h>

#include "Mylist.hpp"

#include "Album.hpp"
#include "Band.hpp"
#include "Concert.hpp"
#include "Member.hpp"
#include "Place.hpp"
#include "RecordLabel.hpp"
#include "Song.hpp"

#include "Database.hpp"
#include "FormShow.hpp"

#include "FormFillA.hpp"
#include "FormFillB.hpp"
#include "FormFillC.hpp"
#include "FormFillM.hpp"
#include "FormFillP.hpp"
#include "FormFillR.hpp"
#include "FormFillS.hpp"

#include "FormAdd.hpp"
#include "MainForm.hpp"

using namespace System::Windows::Forms;
using namespace DataBaseonC;