///////////////////////////////////////////////////////////////////////////////////////////
//    MultiNEAT - Python/C++ NeuroEvolution of Augmenting Topologies Library
//
//    Copyright (C) 2012 Peter Chervenski
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU Lesser General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU Lesser General Public License
//    along with this program.  If not, see < http://www.gnu.org/licenses/ >.
//
//    Contact info:
//
//    Peter Chervenski < spookey@abv.bg >
//    Shane Ryan < shane.mcdonald.ryan@gmail.com >
///////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////
// File:        PhenotypeBehavior.cpp
// Description: Definition for the base phenotype behavior class.
///////////////////////////////////////////////////////////////////////////////



#ifdef USE_BOOST_PYTHON

#include <boost/python.hpp>
#include <boost/python/numeric.hpp>
#include <boost/python/tuple.hpp>
#include <math.h>
#include <cmath>

namespace py = boost::python;

#endif

#include "PhenotypeBehavior.h"

// visual studio 2015 update 3 버그땜에 발생하는 문제 해결용 코드.. 
//namespace boost
//{
//	template <>
//	NEAT::PhenotypeBehavior const volatile * get_pointer<class NEAT::PhenotypeBehavior const volatile >(
//		class NEAT::PhenotypeBehavior const volatile *c)
//	{
//		return c;
//	}
//}
//

namespace NEAT
{

};
