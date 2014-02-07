//selex.h
#include <admodel.h>


#ifndef SELEX_H
#define SELEX_H

class selex
{
private:
	dvector m_x;

public:
	selex();
	selex(const dvector _x);
	~selex();
	
	dvar_vector log_selcoff(const dvar_vector &params);
};

#endif