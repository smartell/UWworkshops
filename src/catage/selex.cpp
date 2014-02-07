#include "selex.h"

/**
 * @brief Constructor for select class
 * @details A class object for implementing alternative selectivity options.
 */
selex::selex()
{ }

selex::~selex()
{
	
}

selex::selex(const dvector _x)
: m_x(_x)
{ }

dvar_vector selex::log_selcoff(const dvar_vector &params)
{
	int x1 = params.indexmin();
	int x2 = params.indexmax() + 1;
	dvar_vector y(x1,x2);
	y(x1,x2-1) = params;
	y(x2) = y(x2-1);
	return(y);
}
