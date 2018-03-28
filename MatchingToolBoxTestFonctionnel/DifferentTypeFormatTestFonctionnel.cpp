#include "GtestEnvironment.h"

/*TEST(DifferentTypeFormat_SystemTest, DifferentType_char_num) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_numeric_lvn_char-num_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_character.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_numeric.csv";
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
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentType_char_vec) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_vector_lvn_char-vec_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_character.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_vector.csv";
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
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentType_num_char) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_numeric_lvn_num-char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_numeric.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_character.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"csv",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentType_num_vec) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_vector_lvn_num-vec_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_numeric.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_vector.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"csv",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentType_vec_char) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_vector_ref_character_lvn_vec-char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_vector.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_character.csv";
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
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentType_vec_num) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_vector_lvn_vec-num_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_vector.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_numeric.csv";
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
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}*/


/*TEST(DifferentTypeFormat_SystemTest, DifferentFormat_csv_xml) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_numeric_ref_numeric_lvn_num_csv-xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_numeric.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_numeric.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"csv",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentFormat_csv_ext) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_vector_ref_vector_lvn_vec_csv-ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_vector.csv";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_vector.ext";
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
	c.run();
	//ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentFormat_xml_csv) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_character_lvn_char_xml-csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_character.xml";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_character.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"xml",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentFormat_xml_ext) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_character_ref_character_lvn_char_xml-ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_character.xml";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_character.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"xml",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentFormat_ext_csv) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_vector_ref_vector_lvn_vec_ext-csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_vector.ext";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_vector.csv";
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
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}

TEST(DifferentTypeFormat_SystemTest, DifferentFormat_ext_xml) {

	string result_path = (string)_shared_path_DIFF_TYPE_FORMAT + "resultat_target_numeric_ref_numeric_lvn_num_ext-xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_DIFF_TYPE_FORMAT + "target_numeric.ext";
	string ref_file = (string)_shared_path_DIFF_TYPE_FORMAT + "ref_numeric.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lvn",
		"-parser",
		"ext",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);
}*/