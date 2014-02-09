//selex.hpp

#ifndef SELEX_HPP
#define SELEX_HPP

#include <admodel.h>

namespace slx {
	
	template<class T>
	class Selex
	{
	public:
		virtual  const T Selectivity(const T &x) const = 0;
		
	};


	template<class T>
	const T plogis(const T &x, const T &mean, const T & sd)
	{
		return T(1.0)/(T(1.0)+exp(-(x-mean)/sd));
	}


	template<class T>
	class Logistic: public Selex<T>
	{
	private:
		T m_mean;
		T m_std;

	public:
		Logistic(T mean = T(0), T std = T(1))
		: m_mean(mean), m_std(std) {}

		T GetMean() const { return m_mean; }
		T GetStd()  const { return m_std;  }

		void SetMean(T mean) { this->m_mean = mean;}
		void SetStd(T std)   { this->m_std  = std; }

		const T Selectivity(const T &x) const
		{
			return plogis<T>(x, this->GetMean(), this->GetStd());
		}
		
		
	};

	

}//slx


#endif /* SELEX_HPP */