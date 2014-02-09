#ifndef SELEX_H  //header guard
#define SELEX_H
#include <admodel.h>

class selex
{
private:
	// declare some member variables
	dvector m_age;
	dvariable m_mu;
	dvariable m_std;

public:
	selex(){};
	selex(const dvector &_age)
	:m_age(_age)
	{}
	~selex(){};

	dvar_vector selcoff(const dvar_vector &params);
	dvar_vector plogis(const dvariable &mu,
					   const dvariable &std);

	//getters
	dvariable get_mu() { return m_mu; }
	dvariable get_std() { return m_std; }
};

// template <typename T1, typename T2>
// T1 logistic( T1 &age,const T2 &mu, const T2 &std)
// {
// 	return (1./(1+exp(-(age-mu)/std)));
// }


#endif