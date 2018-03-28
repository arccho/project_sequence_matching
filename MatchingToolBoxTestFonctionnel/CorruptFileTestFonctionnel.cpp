#include "GtestEnvironment.h"


/**
	TESTS AVEC FICHIERS VIDES EN PARAMETRE
*/
TEST(CorruptFile_SystemTest, CorruptFile_csv_charTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_character_ref_character_lvn_char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_character.csv";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_character.csv";
	char* args[] = { "MatchingToolBox.exe",
	"-sequences",
	&target_file[0u],
	&ref_file[0u],
	"-method",
	"lvn",
	"-parser",
	"csv",
	"-type",
	"character",
	"-result",
	&result_path[0u]};

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(CorruptFile_SystemTest, CorruptFile_csv_vecTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_vector_ref_vector_lvn_vec_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_vector.csv";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_vector.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"csv",
		"-type",
		"vector",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(CorruptFile_SystemTest, CorruptFile_xml_numTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_numeric_ref_numeric_lvn_num_xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_numeric.xml";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_numeric.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"xml",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(CorruptFile_SystemTest, CorruptFile_xml_vecTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_vector_ref_vector_lvn_vec_xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_vector.xml";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_vector.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"xml",
		"-type",
		"vector",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(CorruptFile_SystemTest, CorruptFile_ext_charTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_character_ref_character_lvn_char_ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_character.ext";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_character.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"ext",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(CorruptFile_SystemTest, CorruptFile_ext_vecTAR_vide) {
	string result_path = (string)_shared_path_CORRUPT_FILE + "resultat_target_vector_ref_vector_lvn_vec_ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_CORRUPT_FILE + "target_vector.ext";
	string ref_file = (string)_shared_path_CORRUPT_FILE + "ref_vector.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"ext",
		"-type",
		"vector",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run(), exc::SequenceMatchingException);
}