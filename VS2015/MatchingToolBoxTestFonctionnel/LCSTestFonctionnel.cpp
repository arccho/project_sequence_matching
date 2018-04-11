#include "LCSTestFonctionnel.h"

/*TEST_F(LCS_SystemTest, LCS_character_csv) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_character_ref_character_lcs_char_csv.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_character_ref_character_lcs_char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_character.csv";
	string ref_file = (string)_shared_path_LCS + "ref_character.csv";
	string param_file = (string)_shared_path_LCS + "parameters_char_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_NO_THROW(c.run());

	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_numeric_csv) {

	string expected_file1 = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_numeric_ref_numeric_lcs_num_csv_1.txt";
	string expected_file2 = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_numeric_ref_numeric_lcs_num_csv_2.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_numeric_ref_numeric_lcs_num_csv";
	string result_file1 = result_path + _p + "1.txt";
	string result_file2 = result_path + _p + "2.txt";
	string target_file = (string)_shared_path_LCS + "target_numeric.csv";
	string ref_file = (string)_shared_path_LCS + "ref_numeric.csv";
	string param_file = (string)_shared_path_LCS + "parameters_num_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"numeric",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);

	ASSERT_NO_THROW(c.run());

	Readfile r1(expected_file1, result_file1);
	Readfile r2(expected_file2, result_file2);

	ASSERT_EQ(r1.compareFile(), true);
	ASSERT_EQ(r2.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_vector_csv) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_vector_ref_vector_lcs_vec_csv.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_vector_ref_vector_lcs_vec_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_vector.csv";
	string ref_file = (string)_shared_path_LCS + "ref_vector.csv";
	string param_file = (string)_shared_path_LCS + "parameters_vec_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"vector",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_NO_THROW(c.run());

	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_character_ext) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_character_ref_character_lcs_char_ext.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_character_ref_character_lcs_char_ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_character.ext";
	string ref_file = (string)_shared_path_LCS + "ref_character.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"ext",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_numeric_ext) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_numeric_ref_numeric_lcs_num_ext.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_numeric_ref_numeric_lcs_num_ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_numeric.ext";
	string ref_file = (string)_shared_path_LCS + "ref_numeric.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"ext",
		"-type",
		"numeric",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_vector_ext) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_vector_ref_vector_lcs_vec_ext.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_vector_ref_vector_lcs_vec_ext";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_vector.ext";
	string ref_file = (string)_shared_path_LCS + "ref_vector.ext";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"ext",
		"-type",
		"vector",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);

	ASSERT_EQ(r.compareFile(), true);
}

TEST_F(LCS_SystemTest, LCS_character_xml) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_character_ref_character_lcs_char_xml.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_character_ref_character_lcs_char_xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_character.xml";
	string ref_file = (string)_shared_path_LCS + "ref_character.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
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

TEST_F(LCS_SystemTest, LCS_numeric_xml) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_numeric_ref_numeric_lcs_num_xml.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_numeric_ref_numeric_lcs_num_xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_numeric.xml";
	string ref_file = (string)_shared_path_LCS + "ref_numeric.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
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

TEST_F(LCS_SystemTest, LCS_vector_xml) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_vector_ref_vector_lcs_vec_xml.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_vector_ref_vector_lcs_vec_xml";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_vector.xml";
	string ref_file = (string)_shared_path_LCS + "ref_vector.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
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

/*
On passe un fichier vide à la reférence
et un fichier non vide au niveau de la target
quand on le compile , le programme bug avec une exception qui est levé
de type std::out_of_range
Comme le programme n'est pas fini , il ya des fuites mémoires
*/
/*TEST_F(LCS_SystemTest, LCS_fichier_vide_csv) {
	string result_path = (string)_shared_path_LCS + "resultat_target_character_ref_character_vide_lcs_char_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_character.csv";
	string ref_file = (string)_shared_path_LCS + "ref_character_vide.csv";
	string param_file = (string)_shared_path_LCS + "parameters_char_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_THROW(c.run(), std::out_of_range);
}*/
/*

comparaison de fichier de nature caractere non identique
type de fichiers différents
target : xml
reférence  :  csv

le programme compile sans aucune exception n'est indiquée , il applique l'algoritme mais
avec des distances = 0 et sans correspondance

Result
Distance = 0
Correspondance

<
-
- - - - - - -
a b a c c t y
Longest common sequence : {}

*/
/*TEST_F(LCS_SystemTest, LCS_fichier_type_different_csv) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_fichier_diff_charac_txml_rcsv.txt";
	string result_path = (string)_shared_path_LCS + "resultat_fichier_diff_charac_txml_rcsv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_character.xml";
	string ref_file = (string)_shared_path_LCS + "ref_character.csv";
	string param_file = (string)_shared_path_LCS + "parameters_char_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);
	ASSERT_EQ(r.compareFile(), true);
}*/

/*

comparaison de fichier de nature non identique
et de type de fichiers différents
target : xml , numéric
reférence  :  csv , charactere

le programme compile sans aucune exception n'est indiquée , il applique l'algoritme mais
avec des distances = 0 et sans correspondance



*/
/*TEST_F(LCS_SystemTest, LCS_fichier_type_different_nature) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_fichier_diff_tNUMxml_rCHAcsv.txt";
	string result_path = (string)_shared_path_LCS + "resultat_fichier_diff_charac_txml_rcsv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_numeric.xml";
	string ref_file = (string)_shared_path_LCS + "ref_character.csv";
	string param_file = (string)_shared_path_LCS + "parameters_char_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_NO_THROW(c.run());
	Readfile r(expected_file, result_file);
	ASSERT_EQ(r.compareFile(), true);
}*/
/*
comparaison de fichier de nature  non identique
et type de fichiers identique

target : NUM , csv
ref : char , csv

Marche sans aucune exception avec une distance = 0

Result
Distance = 0
Correspondance

9 2 9 3 4 3 5 6 9 1
- - - - - - - - - -
- - - - - - -
a b a c c t y
Longest common sequence : {}
*/
/*TEST_F(LCS_SystemTest, LCS_fichier_nature_different_Num_Char_csv) {

	string result_path = (string)_shared_path_LCS + "resultat_fichier_nature_diff_tnum_rchar_csv";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_numeric.csv";
	string ref_file = (string)_shared_path_LCS + "ref_character.csv";
	string param_file = (string)_shared_path_LCS + "parameters_num_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_NO_THROW(c.run());

}*/
/*

comparaison de fichier de nature  non identique
et type de fichiers identique
target : csv , vector
reférence  :  csv , numeric

Avec un fichier de parametre , il y a une exception de type SequenceMatchingException qui est lévé lors de
la lecture du fichier parametre
*/
/*TEST_F(LCS_SystemTest, LCS_fichier_nature_different_Vector_Num_csv) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_vector_ref_numeric_lcs_csv_fichier_nature_diff.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_vector_ref_numeric_lcs_csv_fichier_nature_diff";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_vector.csv";
	string ref_file = (string)_shared_path_LCS + "ref_numeric.csv";
	string param_file = (string)_shared_path_LCS + "parameters_vector_csv.xml";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"vector",
		"-param",
		&param_file[0u],
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(14, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);

}*/
/*
comparaison de fichier de nature  non identique
et type de fichiers identique
target : csv , vector
reférence  :  csv , numeric

Sans un fichier de parametre , alors pas d'erreur , l'algo s'applique et arrive à trouver
des séquences communs et des distances (vu que ce sont des vecteurs numéric)
En sortie deux fichiers contenant le long sequence commun
*/
/*TEST_F(LCS_SystemTest, LCS_fichier_nature_different_Vector_Num_csv_2) {

	string result_path = (string)_shared_path_LCS + "resultat_target_vector_ref_numeric_lcs_csv_fichier_nature_diff";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_vector.csv";
	string ref_file = (string)_shared_path_LCS + "ref_numeric.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_NO_THROW(c.run());

}*/
/*
comparaison de fichier de nature  non identique
et type de fichiers identique

target : csv , Character
ref : csv , vector
Sans un fichier de parametre , une exception est lévé lors de la lecture du fichier CSV
Erreur ligne 20, type ERREUR_FILE : CSV Reading error : unable to open the file
*/
/*TEST_F(LCS_SystemTest, LCS_fichier_nature_different_Char_Vector_csv) {

	string expected_file = (string)_shared_path_LCS + "expected_files" + _p + "expected_target_character_ref_vector_lcs_csv_fichier_nature_diff.txt";
	string result_path = (string)_shared_path_LCS + "resultat_target_character_ref_vector_lcs_csv_fichier_nature_diff";
	string result_file = result_path + _p + "1.txt";
	string target_file = (string)_shared_path_LCS + "target_caracter.csv";
	string ref_file = (string)_shared_path_LCS + "ref_vector.csv";
	char* args[] = { "MatchingToolBox.exe",
		"-sequences",
		&target_file[0u],
		&ref_file[0u],
		"-method",
		"lcs",
		"-parser",
		"csv",
		"-type",
		"character",
		"-result",
		&result_path[0u] };

	commandline::CommandLineApplication c = commandline::CommandLineApplication(12, args);
	ASSERT_THROW(c.run(), exc::SequenceMatchingException);

}*/