#include "GtestEnvironment.h"

/*TEST(CorruptFile_SystemTest, CorruptFile_csv_xml) {

	string expected_file = (string)_shared_path_CDP + "expected_files" + _p + "expected_target_character_ref_character_cdp_char_csv.txt";
	string result_path = (string)_shared_path_CDP + "resultat_target_character_ref_character_cdp_char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CDP + "target_character.csv";
	string ref_file = (string)_shared_path_CDP + "ref_character.csv";
	string param_file = (string)_shared_path_CDP + "parameters_char_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"cdp",
		"-parser",
		"csv",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::);

	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}*/