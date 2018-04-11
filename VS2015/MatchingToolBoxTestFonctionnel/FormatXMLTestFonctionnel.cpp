#include "GtestEnvironment.h"

/*TEST(XMLFormat_SystemTest, XMLFormat_testKey_idS_string_char) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_character_ref_character_lvn_char_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_character_ref_character_lvn_char_xml_ids";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_character_ids.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_character_ids.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_idS_targetOnly_string_char) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_character_ref_character_lvn_char_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_character_ref_character_lvn_char_xml_ids_target_only";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_character_ids.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_character.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_id_string_num) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_numeric_ref_numeric_lvn_num_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_character_ref_character_lvn_num_xml_id";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_numeric_id.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_numeric_id.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_id_referenceOnly_string_num) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_numeric_ref_numeric_lvn_num_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_character_ref_character_lvn_num_xml_id_reference_only";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_numeric_id.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_numeric.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_idS_string_vec) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_vector_ref_vector_lvn_vec_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_vector_ref_vector_lvn_vec_xml_ids";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_vector_ids.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_vector_ids.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_idS_targetOnly_string_vec) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_vector_ref_vector_lvn_vec_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_vector_ref_vector_lvn_vec_xml_ids_target_only";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_vector_ids.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_vector.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_id_string_vec) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_vector_ref_vector_lvn_vec_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_vector_ref_vector_lvn_vec_xml_id";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_vector_id.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_vector_id.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST(XMLFormat_SystemTest, XMLFormat_testKey_id_targetOnly_string_vec) {

	string expected_file = (string)_shared_path_FORMAT_XML + "expected_files" + _p + "expected_target_vector_ref_vector_lvn_vec_xml.txt";
	string result_path = (string)_shared_path_FORMAT_XML + "resultat_target_vector_ref_vector_lvn_vec_xml_id_reference_only";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_FORMAT_XML + "target_vector.xml";
	string ref_file = (string)_shared_path_FORMAT_XML + "ref_vector_id.xml";
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
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}*/