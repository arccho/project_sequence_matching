#pragma once
/*!
\author Abdourahman Aden Hassan
\date 24/12/2013
\package inout
\class XMLParser
\implements SequenceParser
\brief Class to parse a XML object into sequences
*/
#ifndef XMLPARSER_H
#define XMLPARSER_H

#include "SequenceParser.h"
#include "Model.h"

namespace inout {

	class XMLParser : public SequenceParser {
	public:
		/*!
		* Constructor
		*/
		XMLParser() : SequenceParser() {}

		XMLParser(SEQUENCE_TYPE t) : SequenceParser(t) {}

		virtual ~XMLParser() {}

		/*!
		* \brief readFile
		* \param doc object XML
		* \return the sequences parsed
		*/
		void* readFile(void* document);
	};
}
#endif  // XMLPARSER_H
