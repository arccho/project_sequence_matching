#ifndef GTEST_FENVIRONMENT_H
#define GTEST_FENVIRONMENT_H

#include "Readfile.h"
#include "Command.h"
#if defined _WIN32 || defined _WIN64
	#include "gtest\gtest.h"

	#define _p "\\"
	#define _shared_path_CDP "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\CDP\\"
	#define _shared_path_DTW "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\DTW\\"
	#define _shared_path_ESC "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\ESC\\"
	#define _shared_path_FSM "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\FSM\\"
	#define _shared_path_LCS "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\LCS\\"
	#define _shared_path_LEVENSHTEIN "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\LEVENSHTEIN\\"
	#define _shared_path_MVM "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\MVM\\"

	#define _shared_path_DIFF_TYPE_FORMAT "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\DIFFERENT_TYPE_FORMAT\\"
	#define _shared_path_FORMAT_XML "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\FORMAT_XML\\"
	#define _shared_path_CORRUPT_FILE "..\\MatchingToolBoxTestFonctionnel\\TestingMaterial\\CORRUPT_FILE\\"

#elif defined __linux__
	#include "gtest/gtest.h"

	#define _p "/"
	#define _shared_path_CDP "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/CDP/"
	#define _shared_path_DTW "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/DTW/"
	#define _shared_path_ESC "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/ESC/"
	#define _shared_path_FSM "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/FSM/"
	#define _shared_path_LCS "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/LCS/"
	#define _shared_path_LEVENSHTEIN "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/LEVENSHTEIN/"
	#define _shared_path_MVM "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/MVM/"

	#define _shared_path_DIFF_TYPE_FORMAT "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/DIFFERENT_TYPE_FORMAT/"
	#define _shared_path_FORMAT_XML "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/FORMAT_XML/"
	#define _shared_path_CORRUPT_FILE "../../../VS2015/MatchingToolBox/MatchingToolBoxTestFonctionnel/TestingMaterial/CORRUPT_FILE/"

#endif

class MyEnvironment : public testing::Environment {

	private:

		/*!
		*  \brief global SetUp
		*  Called before all the tests
		*/
		virtual void SetUp() {}

		/*!
		*  \brief global TearDown
		*  Called after all the tests
		*/
		virtual void TearDown() {}
};

#endif  // GTEST_FENVIRONMENT_H