#include <admodel.h>
#include "selex.h"


dvar_vector selex::plogis(const dvariable &mu,
					   const dvariable &std)
{
	m_mu = mu;
	m_std = std;
	return 1./(1.+exp(-(m_age-mu)/std));
}

dvar_vector selex::selcoff(const dvar_vector &params)
{
	cout<<m_age<<endl;
  int x1 = params.indexmin();
  int x2 = params.indexmax() + 1;
  dvar_vector log_sel(x1,x2);
 // calculate the selectivity from the sel_coffs
  for (int j=x1;j<x2;j++)
  {
    log_sel(j)=params(j);
  }
  // the selectivity is the same for the last two age classes
  log_sel(x2)=params(x2-1);
  //cout<<junk<<endl;
  return log_sel;
}