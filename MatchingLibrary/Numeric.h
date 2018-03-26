#pragma once
/*!
\author Abdourahman Aden Hassan
\date 20/12/2013
\package model
\class Numeric
\implements Element
\brief Class for for element of type number
*/
#ifndef NUMERIC_H
#define NUMERIC_H

#include <typeinfo>

#include "Element.h"
#include "math.h"
#include "SequenceMatchingException.h"

namespace model {
	class Numeric : public Element {
	protected:
		/*!< The value of the number*/
		float fNvalue;

	public:
		/*!
		*  \brief Constructor
		*/
		Numeric();
		Numeric(float value);

		/*!
		*  \brief Constructor
		*  Copy a Numeric object
		*  \param copy : the object to copy
		*/
		Numeric(Numeric const &copy);

		/*!
		*  \brief Getter
		*  get the value
		*  \return c : the value
		*/
		float getValue();

		/*!
		*  \brief setter
		*  set the value
		*  \param c : the value
		*/
		void setValue(float value);

		/*!
		* \brief abstract method implementation : distance
		* get the distance between two Numeric
		* \param eOD1 the first element
		* \param eOD2 the seconde element
		* \return ret the distance
		* \exception if both the two element are not Numeric
		*/
		float distance(Element *eOD1, Element *eOD2);

		/*!
		* \brief toString
		* get the Numeric in a string format
		* \return the string
		*/
		string toString();

		/*!
		* \brief copy
		* copy the current object Numeric
		* \return a the copy of the obect
		*/
		Element *copy();
	};
}
#endif  // NUMERIC_H