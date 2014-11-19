#ifndef PlantLoopEquip_hh_INCLUDED
#define PlantLoopEquip_hh_INCLUDED

// EnergyPlus Headers
#include <EnergyPlus.hh>

namespace EnergyPlus {

namespace PlantLoopEquip {

	// Data
	// SUBROUTINE SPECIFICATION

	// Functions

	void
	SimPlantEquip(
		int const LoopNum, // loop counter
		int const LoopSideNum, // loop counter
		int const BranchNum,
		int const Num,
		bool const FirstHVACIteration, // TRUE if First iteration of simulation
		bool & InitLoopEquip,
		bool const GetCompSizFac // Tells component routine to return the component sizing fraction
	);

	//     NOTICE

	//     Copyright � 1996-2014 The Board of Trustees of the University of Illinois
	//     and The Regents of the University of California through Ernest Orlando Lawrence
	//     Berkeley National Laboratory.  All rights reserved.

	//     Portions of the EnergyPlus software package have been developed and copyrighted
	//     by other individuals, companies and institutions.  These portions have been
	//     incorporated into the EnergyPlus software package under license.   For a complete
	//     list of contributors, see "Notice" located in main.cc.

	//     NOTICE: The U.S. Government is granted for itself and others acting on its
	//     behalf a paid-up, nonexclusive, irrevocable, worldwide license in this data to
	//     reproduce, prepare derivative works, and perform publicly and display publicly.
	//     Beginning five (5) years after permission to assert copyright is granted,
	//     subject to two possible five year renewals, the U.S. Government is granted for
	//     itself and others acting on its behalf a paid-up, non-exclusive, irrevocable
	//     worldwide license in this data to reproduce, prepare derivative works,
	//     distribute copies to the public, perform publicly and display publicly, and to
	//     permit others to do so.

	//     TRADEMARKS: EnergyPlus is a trademark of the US Department of Energy.

} // PlantLoopEquip

} // EnergyPlus

#endif
